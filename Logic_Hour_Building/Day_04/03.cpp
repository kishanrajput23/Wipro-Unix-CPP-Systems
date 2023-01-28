int lastDigit(int input1) {
    if (input1<0) {
        input1 = input1 * -1;
        return input1%10;
    }
    return input1%10;
}