int sumOfLastDigitsOf2Numbers(int input1, int input2) {
    if (input1<0) {
        input1 = input1* -1;
    }
    if (input2<0) {
        input2 = input2* -1;
    }
    int sum = input1%10 + input2%10;

    return sum;
}