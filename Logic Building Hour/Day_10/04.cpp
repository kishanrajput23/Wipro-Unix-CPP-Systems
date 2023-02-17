int MostFrequentDigit(int input1, int input2, int input3, int input4) {
    int arr[] = {input1, input2, input3, input4};
    int a[10] = {0};
    for (int i=0; i<4; i++) {
        int x = arr[i];
        while (x>0) {
            int rem = x%10;
            a[rem] += 1;
            x /= 10;
        }
    }

    int index = 0, max = 0;
    for (int i=0; i<10; i++) {
        if (a[i]>=max) {
            max = a[i];
            index = i;
        }
    }
    return index;
    throw "Function MostFrequentDigit(int input1,int input2,int input3,int input4) not implemented. ";
}
