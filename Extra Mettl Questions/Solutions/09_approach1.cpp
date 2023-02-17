int digitRemovePalin(int input1)  {
	// Write code here
    int arr[10];
    int i=0;
    int rev = 0;
    int x = input1;
    while (input1!=0) {
        int rem=input1%10;
        rev = rev*10 + rem;
        arr[i] = rem;
        input1 /= 10;
        i++;
    }
    if(x == rev){
    return -1;
    }
    else{
        for(int j=0;j<i;j++){
            i=i-1;
            if(arr[j]==arr[i]){
                continue;
            }
            else if(arr[j]==arr[i-1]) {
                return arr[i];
            }
            else{
                return arr[j];
            }
        }
    }
    return 0;
}
