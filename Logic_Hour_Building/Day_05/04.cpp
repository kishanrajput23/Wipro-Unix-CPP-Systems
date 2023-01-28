int countEvensOdds(int input1, int input2, int input3, int input4, int input5, char* input6) {
    int count = strlen(input6);
    int even=0, odd=0;
    int arr[] = {input1, input2, input3, input4, input5};
    for (int i=0; i<5; i++) {
        if (arr[i]%2==0) {
            even+=1;
        }
        else {
            odd += 1;
        }
    }
    if (count == 4) {
        return even;
    }
    else {
        return odd;
    }
}