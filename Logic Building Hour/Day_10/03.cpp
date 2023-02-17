int weightOfString(char* input1, int input2) {
	// Write code and remove the below exception.
    char letter;
    char* ch = input1;
    int weight = 0;
    for (int i=0; i<strlen(ch); i++) {
        letter = ch[i];
        if (input2==0) {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
                continue;
            }
        }
        if (letter >=65 && letter <= 90) {
            weight += letter - 64;
        }
        if(letter >= 97 && letter <= 122) {
            weight += letter - 96;
        }
    }
    return weight;
    throw "Function weightOfString(char* input1,int input2) not implemented. ";
}
