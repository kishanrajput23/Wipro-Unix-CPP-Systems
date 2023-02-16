int digit_Extraction_Sum(char* input1) {
    for (int i=0; ch[i]>'\0'; i++) {
        if (ch[i]>='0' && ch[i]<='9') {
            sum1 += ch[i] - '0';
        }
    }
    
    if (sum1>9) {
        while (sum1>0) {
            int rem = sum1%10;
            sum2 += rem;
            sum1 /= 10;
        }
        return sum2;
    }
    else {
        return sum1;
    }
    throw "Function digit_Extraction_Sum(char* input1) not implemented. ";
}
