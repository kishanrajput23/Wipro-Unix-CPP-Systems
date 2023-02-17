/*
Question : Traverse Array and Find Key (Mode 2)

In this question you have to traverse throughout the whole array till than you encounter
a negative number in the given array.

You have to keep finding keys and Next Address by following below example and return the
sum of all keys after adding it alternatively.

Note : Index starts from 0 only.

Example 1 : If the array elements are
input1[] = {47, -65, 51, 17, 29, 32};
input2 = 6;
Output = -1

Explanation : Firstly take the first element of the array or 0 index element.

so, first element = 47
Here, key = 7
Next Address = 4

Now go to 4th element of the array as Next Address is found 4.

4th array element = 29
Here , key = 9
Next Address = 2

Now go to 2nd element of the array as Next Address is found 2.

2nd array element = 51
Here , key = 1
Next Address = 5

Now go to 5th element of the array as Next Address is found 5.

5th array element = 32
Here , key = 2
Next Address = 3

Now go to 3rd element of the array as Next Address is found 3.

3rd array element = 17
Here , key = 7
Next Address = 1

Now go to 1st element of the array as Next Address is found 1.

1st array element = -65
Here , key = 5
Next Address = STOP (because we have reached a negative number.)

Now sum all the keys we found above and add all of them alternatively.
Final Result = 7-9+1-2+7-5 = -1



Example 2 : If the array elements are
input1[] = {47, 65, 51, 17, 29, -32};
input2 = 6;
Output = -3

Explanation : Firstly take the first element of the array or 0 index element.

so, first element = 47
Here, key = 7
Next Address = 4

Now go to 4th element of the array as Next Address is found 4.

4th array element = 29
Here , key = 9
Next Address = 2

Now go to 2nd element of the array as Next Address is found 2.

2nd array element = 51
Here , key = 1
Next Address = 5

Now go to 5th element of the array as Next Address is found 5.

5th array element = -32
Here , key = 2
Next Address = STOP (because we have reached a negative number.)

Now sum all the keys we found above and add all of them alternatively.
Final Result = 7-9+1-2 = -3
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int input1[6] = {47, 65, 51, 17, 29, -32};
    int input2 = 6;
    int max=0;
    int arr[input2];
    int flag = 0;
    for (int i=0; i<input2; i++) {
        if (input1[i]<0) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0) {
        cout<<"Inside the if loop"<<endl;
        int dup[input2];
        copy(input1, input1+input2, dup);
        sort(dup, dup+input2);
        cout<<dup[0];
    }
    else {

        int num = input1[0];
        int k = 0;

    for (int i=0; i<input2; i++) {
        if (num < 0) {
            int r = num;
            r = r * -1;
            cout<<r<<endl;
            arr[k] = r%10;
            k++;
            break;
        }
        else {
            int temp = num;
            cout<<temp<<endl;
            int key = temp%10;
            int rem = num/10;
            arr[k] = key;
            k++;
            num = input1[rem];
        }
    }
    cout<<"Keys are : ";
    for (int i=0; i<k; i++) {
        cout<<arr[i]<<" ";
    }
    
    int sum = arr[0]-arr[1];

    for(int i=2; i<k; i++) {
        if (i%2==0) {
            sum += arr[i]; 
        }
        else {
            sum -= arr[i];
        }
    }
    cout<<endl<<"sum is : "<<sum<<endl;
    }
}