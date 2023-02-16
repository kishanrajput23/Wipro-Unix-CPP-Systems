int findPosition(int input1) {
	// Write code and remove the below exception.

    int first = 0;
    int second = 1;
    int sum = 1;

    if (input1<=1) {
        return input1+1;
    }
    
    int count=2;

    while (sum<input1) {
        sum = first + second;
        count++;
        first = second;
        second = sum;
    }
    return count;
    throw "Function findPosition(int input1) not implemented. ";
}
