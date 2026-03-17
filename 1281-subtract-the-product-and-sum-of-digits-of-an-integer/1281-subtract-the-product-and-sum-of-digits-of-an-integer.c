int subtractProductAndSum(int n) {
    int div=1;
    int product=1;
    int sum=0;
    while(div<=n)
    {
        int ed=(n%(div*10))/div;
        product=product*ed;
        sum=sum+ed;
        div=div*10;
    }
    int result=product-sum;
    return result;
}