char* convertToBase7(int num) {
    if(num==0) return strdup("0");
    int isNegative=num<0;
    if(isNegative) num=-num;
    char temp[50];
    int i=0;
    while(num>0){
        temp[i++]=(num%7)+'0';
        num/=7;
    }
    if(isNegative){
        temp[i++]='-';
    }
    char *result=(char*)malloc((i+1)*sizeof(char));
    for(int j=0;j<i;j++)
    {
        result[j]=temp[i-j-1];   
    }
    result[i]='\0';
    return result;
}