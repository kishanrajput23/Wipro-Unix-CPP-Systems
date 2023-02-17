int getCodeThroughStrings(char* input1) {
    char* ch = input1;
    int count=0;
    int sum = 0;

    for (int i=0; input1[i]>'\0'; i++) {
        if (input1[i] == ' ') {
            continue;
        }
        count++;
    }

    while (count>0) {
        int rem = count%10;
        sum += rem;
        count /= 10;
    }
    
    return sum;
    
    throw "Function getCodeThroughStrings(char* input1) not implemented. ";
}