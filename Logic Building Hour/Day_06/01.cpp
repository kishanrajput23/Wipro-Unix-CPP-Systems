int isPrime(int input1) {
    int count =0;
    for (int i=2; i<input1; i++) {
        if (input1%i==0) {
            count+=1;
            break;
        }
    }
    if (count==0) {
        return 2;
    }
    return 1;
}