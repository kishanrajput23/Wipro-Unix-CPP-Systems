string reducedString(string input1) {
	// Write code here
    int n = input1.length();
    string s = "";
    s = s+input1[0];

    if (n%2==0) {
        for (int i=1; i<n; i+=2) {
            s += input1[i];
        }
    }
    else {
        for (int i=2; i<n; i+=2) {
            s += input1[i];
        }
    }
    return s;
}
