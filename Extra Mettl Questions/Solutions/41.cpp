int digit_Extraction_Sum(char* input1) {
	// Write code and remove the below exception.
    char* ch = input1;
    int sum = 0;
    for (int i=0; ch[i]>'\0'; i++) {
        if (ch[i]>= '0' && ch[i]<='9') {
            sum += ch[i] - '0';
        }
    }
    int sum2 = 0;
    while (sum>0) {
        int rem = sum%10;
        sum2 += rem;
        sum /= 10;
    }

    return sum2;
    throw "Function digit_Extraction_Sum(char* input1) not implemented. ";
}
