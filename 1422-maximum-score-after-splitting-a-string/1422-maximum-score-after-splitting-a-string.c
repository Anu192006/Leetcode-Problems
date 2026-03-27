int maxScore(char* s) {
    int count=0;
    int len=strlen(s);
    int pf[len];
    pf[0]=(s[0]== '0' ? 1:0);
    for(int i=1;i<len;i++)
    {
        pf[i]=pf[i-1]+(s[i]=='0' ? 1:0);
    }
    int sf[len];
    sf[len-1]=s[len-1]-'0';
    for(int i=len-2;i>=0;i--)
    {
        sf[i]=sf[i+1]+s[i]-'0';
    }
    int ls,rs,sum,max=0;
    for(int i=0;i<len-1;i++)
    {
        ls=pf[i];
        rs=sf[i+1];
        sum=ls+rs;
        if(max<sum) max=sum;
    }
    return max;
}