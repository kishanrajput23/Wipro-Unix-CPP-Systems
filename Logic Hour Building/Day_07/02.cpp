int allDigitsCount(int input1) {
	// Write code and remove the below exception.
    int count=0;
    while(input1>0) {
        input1/=10;
        count+=1;
    }
    return count;
    throw "Function allDigitsCount(int input1) not implemented. ";
}