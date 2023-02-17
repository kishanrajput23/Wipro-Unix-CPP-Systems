int uniqueDigitsCount(int input1) {
	// Write code and remove the below exception.
    int arr[10] = {0};
    int count=0;
    while(input1>0) {
        int rem = input1%10;
        if (arr[rem] == 0) {
            arr[rem] = 1;
            count++;
        }
        input1/=10;
    }
    return count;
}
    