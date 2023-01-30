int isPalinNumPossible(int input1) {
	// Write code here
    int arr[10] = {0};
    int temp = input1;
    int count = 0;
    while (temp>0) {
        int rem = temp%10;
        arr[rem] += 1;
        temp/=10;
    }
    for (int i=0; i<10; i++) {
        if (arr[i]%2!=0) {
            count++;
        }
    }
    if (count > 1) {
        return 1;
    }
    return 2;
}