double average(int* salary, int salarySize) {
    int max1=salary[0],min1=salary[1];
    double sum=0;
    for(int i=0;i<salarySize;i++)
    {
        if(max1<salary[i])
        {
            max1=salary[i];
        }
    }
    for(int i=0;i<salarySize;i++)
    {
        if(min1>salary[i])
        {
            min1=salary[i];
        }
    }
    for(int i=0;i<salarySize;i++)
    {
        sum=sum+salary[i];
    }
    sum=sum-(min1+max1);
    int newSize=salarySize-2;
    double ans=sum/newSize;
    return ans;
}