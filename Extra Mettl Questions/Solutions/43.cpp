int howManyVowels(string input1) {
	// Write code here
    int count = 0;
    for (int i=0; i<input1.length(); i++) {
        if (input1[i]=='a' || input1[i]=='e' || input1[i]=='i' || input1[i]=='o' || input1[i]=='u' ||
        input1[i]=='A' || input1[i]=='E' || input1[i]=='I' || input1[i]=='O' || input1[i]=='U') {
            count++;
        }
    }
    return count;
	throw "Function howManyVowels(string input1) not implemented. ";
}
