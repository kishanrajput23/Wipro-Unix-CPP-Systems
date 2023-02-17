#include<alogorithm>
using namespace std;
int createPIN(int input1, int input2, int input3) {
	// Write code and remove the below exception.
    int arr[3] = {input1, input2, input3};
    int a[9], k=0;
    
    for (int i=0; i<3; i++) {
        int x = arr[i];
        while(x>0) {
            int rem = x%10;
            a[k] = rem; 
            k++;
            x/=10;
        }
    }
    int ones[3];
    int tens[3];
    int hund[3];
    
    ones[0] = input1%10;
    ones[1] = input2%10;
    ones[2] = input3%10;

    tens[0] = (input1/10)%10;
    tens[1] = (input2/10)%10;
    tens[2] = (input3/10)%10;

    hund[0] = (input1/100)%10;
    hund[1] = (input2/100)%10;
    hund[2] = (input3/100)%10;

    sort(ones, ones+3);
    sort(tens, tens+3);
    sort(hund, hund+3);
    sort(a, a+9);

    int num = a[8] * 1000 + hund[0] *100 + tens[0] * 10 + ones[0] * 1;
    return num;

    throw "Function createPIN(int input1,int input2,int input3) not implemented. ";
}
