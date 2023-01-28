int countOdd(int input1, int input2, int input3, int input4, int input5) {
    int arr[] = {input1, input2, input3, input4, input5};
    int count = 0;
    for (int i=0; i<5; i++) {
        if (arr[i]%2!=0) {
            count+=1;
        }
    }
    return count;
}