#include<algorithm>
using namespace std;

int createPIN(int input1, int input2, int input3) {
	// Write code and remove the below exception.
    int ones[3] = {input1%10, input2%10, input3%10};
    sort(ones, ones+3);

    int tens[3] = {(input1/10)%10, (input2/10)%10, (input3/10)%10};
    sort(tens, tens+3);

    int hun[3] = {(input1/100)%10, (input2/100)%10, (input3/100)%10};
    sort(hun, hun+3);

    int thos[3] = {ones[2], tens[2], hun[2]};
    sort(thos, thos+3);

    int num = thos[2]*1000 + hun[0]*100 + tens[0]*10 + ones[0];
    return num;

    throw "Function createPIN(int input1,int input2,int input3) not implemented. ";
}
