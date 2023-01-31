struct Result {
    int output1;
    int output2;
};

Result findOriginalFirstAndSum(int input1[], int input2) {
    struct Result r1; 
    int arr[input2];
    arr[input2-1] = input1[input2-1];

    for (int i=input2-1; i>=0; i--) {
        arr[i-1] = input1[i-1] - arr[i];
    }

    int sum=0;
    for (int i=0; i<input2; i++) {
        sum += arr[i];
    }

    r1.output1 = arr[0];
    r1.output2 = sum;

    return r1;
    throw "Function findOriginalFirstAndSum(int input1[],int input2) not implemented. ";
}