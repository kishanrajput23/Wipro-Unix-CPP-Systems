int totalHillWeight(int input1, int input2, int input3) {
	// Write code here
    int weight = input2;
    int n = input3;
    for (int i=2; i<input1+1; i++) {
        weight += (input2 + n) * i;
        n = n+input3;
    }
    return weight;
}