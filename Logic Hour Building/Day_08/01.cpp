int digitSum (int input1) {
	// Write code and remove the below exception.
    int sum1=0; 
    int sum2=0;
    int temp = input1;
    if (temp<0) {
        temp = temp * -1;
    }
    while (temp>0) {
        sum1 += temp%10;
        temp/=10;
    }

    while (sum1>0) {
        sum2 += sum1%10;
        sum1/=10;
    }

    if (input1<0 && sum2<=9) {
        return sum2 * -1;
    }
    else if (sum2>9)  {
        int sum3 = 0;
        while (sum2>0) {
            sum3 += sum2%10;
            sum2/=10;
        }
        if (input1<0 && sum3<=9) {
        return sum3 * -1;
        }
        else {
            return sum3;
        }
    }
    else {
        return sum2;
    }
    throw "Function digitSum(int input1) not implemented. ";
}