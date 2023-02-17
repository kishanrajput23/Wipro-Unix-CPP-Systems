struct Result {
    int output1;
    int output2;
};

Result decreasingSeq(int input1[], int input2) {
	// Write code and remove the below exception.
    struct Result r1;
    int arr[10];
    int count = 1;
    int j=0;
    int maxi = 0;
    
    if (input2==0) {
        maxi = 0;
        j = 0;
    }
    else {
        for (int i=0; i<input2-1; i++) {
            if (input1[i]>input1[i+1]) {
                count++;
                continue;
            }
            if (count>1) {
                arr[j] = count;
                count = 1;
                j++;
            }
        }
    }
    
    int i=input2-2;
    
    if (input1[i]>input1[i+1]) {
        arr[j] = count;
        j++;
    }
    
    for (int i=0; i<j; i++) {
        if (arr[i]>maxi) {
            maxi = arr[i];
        }
    }
    r1.output1 = j;
    r1.output2 = maxi;

    return r1;
    
    throw "Function decreasingSeq(int input1[],int input2) not implemented. ";
}