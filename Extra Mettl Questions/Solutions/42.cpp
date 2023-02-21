string findLongWord(string input1) {
	  // Write code here
    if (input1.length()<=10) {
        return input1;
    }
    else {
        return input1[0] + to_string(input1.length()-2) + input1[input1.length()-1];
    }
	throw "Function findLongWord(string input1) not implemented. ";
}
