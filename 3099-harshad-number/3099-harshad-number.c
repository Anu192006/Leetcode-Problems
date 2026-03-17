int sumOfTheDigitsOfHarshadNumber(int x) {
    int div=1;
    int sum=0;
    while(div<=x)
    {
        int ed=(x%(div*10))/div;
        sum=sum+ed;
        div=div*10;
    }
    if((x%sum)==0)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}