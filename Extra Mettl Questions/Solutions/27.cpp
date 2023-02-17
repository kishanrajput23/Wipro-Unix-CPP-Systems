int reducedArrCount(int input1[], int input2) {
	// Write code and remove the below exception.
    if (input2%2==0) {
        for (int i=0; i<input2; i+=2) {
            input1[i] = 0;
        }
    }
    else {
        for (int i=1; i<input2; i+=2) {
            input1[i] = 1;
        }
    }

    int sum = 0;

    for (int i=0; i<input2; i++) {
        sum += input1[i];
    }

    int sum2=0;

    if (sum>9) {
        while (sum>0) {
            sum2 += sum%10;
            sum/=10;
        }
        if (sum2 > 9) {
            int sum3 = 0;
            while (sum2>0) {
                sum3 += sum2%10;
                sum2/=10;
            }
            return sum3;
        }
        else {
            return sum2;
        }
    }
    else {
        return sum;
    }
    throw "Function reducedArrCount(int input1[],int input2) not implemented. ";
}
