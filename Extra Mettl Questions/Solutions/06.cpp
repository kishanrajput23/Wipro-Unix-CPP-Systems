int mostFrequentlyOccuringDigit(int input1[], int input2) {
    int arr[10] = {0};
    for (int i=0; i<input2; i++) {
        while(input1[i]>0) {
            int rem = input1[i]%10;
            arr[rem] += 1;
            input1[i] /= 10;
        }
    }

    int maxi = 0;
    int index = 0;

    for (int i=0; i<10; i++) {
        if (arr[i]>=maxi) {
            maxi = arr[i];
            index = i;
        }
    }
    return index;
}