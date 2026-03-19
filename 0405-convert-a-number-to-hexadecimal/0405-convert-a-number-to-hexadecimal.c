char* toHex(int num) {
    if(num==0){
        char *res=(char*)malloc(2);
        res[0]='0';
        res[1]='\0';
        return res;
    }
    char hex[]="0123456789abcdef";
    char *res=(char*)malloc(9);
    int i=0;
    unsigned int n=(unsigned int)num;
    while(n!=0)
    {
        res[i++]=hex[n&0xf];
        n>>=4;
    }
    res[i]='\0';
    for(int j=0;j<i/2;j++)
    {
        char temp=res[j];
        res[j]=res[i-j-1];
        res[i-j-1]=temp;
    }
    return res;
}