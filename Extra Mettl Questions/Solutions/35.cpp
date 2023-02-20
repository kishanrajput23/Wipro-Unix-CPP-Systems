string FindNext(string input1) {
    // Write code here
    string str1 = "qwertyuiop[]asdfghjkl:'zxcvbnm,.";
    string str2 = "QWERTYUIOP[]ASDFGHJKL:'ZXCVBNM,.";
    string str3 = "";

    for (int i=0; i<input1.length(); i++) {
        for (int j=0; j<str2.length(); j++) {
            if (isupper(input1[i])) {
                if (input1[i]==str2[j]) {
                    char ch = input1[i];
                    if (ch == 'A' || ch == 'Q' || ch=='Z') {
                        str3 += ch;
                    }
                    else if (ch == 'W') {
                        str3 += 'Q';
                    }
                    else if (ch == 'S') {
                        str3 += 'A';
                    }
                    else if (ch == 'X') {
                        str3 += 'Z';
                    }
                    else {
                        str3 += str2[j-2];
                    }
                }
            }
            
            else if (islower(input1[i])) {
                if (input1[i]==str1[j]) {
                    char ch = input1[i];
                    if (ch == ']' || ch == '.') {
                        str3 += ch;
                    }
                    else if (ch == '[') {
                        str3 += ']';
                    }
                    else if (ch == ':') {
                        str3 += "'";
                    }
                    else if (ch == ',') {
                        str3 += '.';
                    }
                    else {
                        str3 += str1[j+2];
                    }
                }
            }
            
            else {
                if (input1[i]==' ') {
                    str3 += ' ';
                    break;
                }
            }
        }
    }
    return str3;
    throw "Function FindNext(string input1) not implemented. ";
}
