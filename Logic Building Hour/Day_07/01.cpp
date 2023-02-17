int countPrimesInRange(int input1, int input2) {
    int count = 0;
    for (int i=input1; i<=input2; i++) {
        int temp=0;
        for (int j=2; j<i; j++) {
            if (i%j==0) {
                temp=1;
            }
        }
        if (temp==0) {
            count+=1;
        }
    }
    return count;
    throw "Function countPrimesInRange(int input1,int input2) not implemented. ";
}