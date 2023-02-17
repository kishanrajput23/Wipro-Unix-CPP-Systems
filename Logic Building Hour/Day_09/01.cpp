int isPalinNum(int input1) {
	// Write code here
    int temp, n=0;
    temp = input1;
    while (temp>0) {
        int rem = temp%10;
        n = n*10 + rem;
        temp/=10;
    }
    if (n == input1) {
        return 2;
    }
    return 1;   
}