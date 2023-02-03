int digitRemovePalin(int input1)  {
	  // Write code here
    int f[10]={0};
    int rev=0;
    int temp=input1;
    int count=0;
    int arr[10];

    while (temp>0) {
        int rem = temp%10;
        rev = rev*10 + rem;
        f[rem] += 1;
        arr[count] = rem;
        temp /= 10;
        count++;
    }

    int ele=0;
    if (rev==input1){
        return -1;
    }
    else {
        for (int i=0; i<count; i++) {
            if (f[arr[i]] ==1 ){
                ele = arr[i];
                break;
            }
        }
    }
    return ele;
}
