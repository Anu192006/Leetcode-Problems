char* multiply(char* num1, char* num2) {
    if(num1[0]=='0'||num2[0]=='0'){
        char* res=(char*)malloc(2);
        strcpy(res,"0");
        return res;
    }
    int len1=strlen(num1);
    int len2=strlen(num2);
    int* result=(int*)calloc(len1+len2,sizeof(int));
    for(int i=len1-1;i>=0;i--)
    {
        for(int j=len2-1;j>=0;j--)
        {
            int mul=(num1[i]-'0')*(num2[j]-'0');
            int sum=mul+result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]+=sum/10;
        }
    }
    char* res=(char*)malloc(len1+len2+1);
    int k=0,i=0;
    while(i<len1+len2 && result[i]==0) i++;
    for(;i<len1+len2;i++){
        res[k++]=result[i]+'0';
    }
    res[k]='\0';
    free(result);
    return res;
    }