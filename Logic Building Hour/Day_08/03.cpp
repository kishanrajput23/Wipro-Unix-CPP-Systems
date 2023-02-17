int OddDigitsSum (int input1) {
	// Write code here
    int sum = 0;
    while (input1>0) {
        int rem = input1%10;
        if (rem%2!=0) {
            sum += rem;
        }
        input1/=10;
    }
    return sum;
}