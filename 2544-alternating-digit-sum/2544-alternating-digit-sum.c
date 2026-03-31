int alternateDigitSum(int n) {
    int sum=0;
    int sign=1;
    int temp=n,len=0;
    while(temp>0){
        len++;
        temp/=10;
    }
    if(len%2==0) sign=-1;
    while(n>0){
        sum+=sign*(n%10);
        sign*=-1;
        n/=10;
    }
    return sum;
}