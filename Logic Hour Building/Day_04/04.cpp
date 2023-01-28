int secondndLastDigitOfN(int input1) {
    int digit = (input1/10)%10;

    if (digit==0) {
        return -1;
    }
    else{
        return digit;
    }
}