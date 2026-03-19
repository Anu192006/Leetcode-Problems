char* convertToTitle(int columnNumber) {
    char *result=(char*)malloc(100*sizeof(char));
    int i=0;
    while(columnNumber>0)
    {
        columnNumber--;
        int rem=columnNumber%26;
        result[i++]='A'+rem;
        columnNumber=columnNumber/26;
    }
    result[i]='\0';
    for(int j=0;j<i/2;j++)
    {
        char temp=result[j];
        result[j]=result[i-j-1];
        result[i-j-1]=temp;
    }
    return result;
}