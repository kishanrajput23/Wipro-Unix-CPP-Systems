int nonRepeatDigitsCount(int input1) {
	// Write code here
    int arr[10] = {0};
    int count=0;
    int temp = input1;

    while(temp>0) {
        int rem = temp%10;
        arr[rem] += 1;
        temp/=10;
    }

    while(input1>0) {
        int rem = input1%10;
        if (arr[rem]==1) {
            count+=1;
        }
        input1/=10;
    }
    return count;
}