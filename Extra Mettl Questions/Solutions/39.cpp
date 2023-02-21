#include<math.h>
int findAverage(int input1[], int input2) {
    // Write code and remove the below exception.
    int sum = 0;
    for (int i=0; i<input2; i++) {
        sum += input1[i];
    }
    float count = float(input2);
    int res = round(sum/count);
    return res;
    throw "Function findAverage(int input1[],int input2) not implemented. ";
}
