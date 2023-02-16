int findPassword(int input1, int input2, int input3, int input4, int input5) {
    // Write code here
    int num[] = {input1, input2, input3, input4, input5};
    int stable=0, unstable=0, i, j;

    for (i=0; i<5; i++) {
        int temp = num[i];
        int f[10] = {0};
        int maxi = 0;

        while (temp>0) {
            int rem = temp%10;
            f[rem] += 1;
            temp /= 10;

            if (f[rem]>maxi) {
                maxi = f[rem];
            }
        }

        for (j=0; j<10; j++) {
            if (f[j]!=0 && f[j]!=maxi) {
                break;
            }
        }

        if (j==10) {
            stable += num[i];
        }
        
        else {
            unstable += num[i];
        }
    }
    return stable-unstable;
}
