int sumOfSumsOfDigits(int input1) {
    int size = 0;
    int sum=0;
    int temp = input1;
    while (temp>0) {
        temp/=10;
        size++;
    }

    for (int i=size; i>=0; i--) {
        int rem = input1%10;
        sum += rem * i;
        input1/=10;
    }

    return sum;    
}