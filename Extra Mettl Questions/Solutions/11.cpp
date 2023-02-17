int seriesN(int input1, int input2, int input3, int input4) {
    int arr[500];
    arr[0]=input1;
    arr[1]=input2;
    arr[2]=input3;

    int a = input2 - input1;
    int b = input3 - input2;

    for (int i=3; i<input4; i++) {
        if (i%2==0) {
            arr[i] = arr[i-1] + b;
        }
        else {
            arr[i] = arr[i-1] + a;
        }
    }
    return arr[input4-1];
}
