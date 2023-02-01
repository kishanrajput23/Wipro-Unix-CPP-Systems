int AddSub(int input1, int input2) {        
    int result=input1;
    int a=0, b=0;
    for(int i=input1-1; i>0; i=i-2) {
        a += i;
    }
    for(int i=input1-2;i>0;i=i-2) {
        b += i;
    }
        
    if(input2==1) {
        return (result-a+b);
    }
    else {
        return(result+a-b);
    }
}
