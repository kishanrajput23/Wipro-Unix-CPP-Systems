int allDigitsCount(int input1) {
    // Write code here
    int count = 0;
    while (input1>0) {
        input1/=10;
        count++;
    }
    return count;
}
