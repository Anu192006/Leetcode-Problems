bool checkPerfectNumber(int num) {
    int sum=1;
    if(num==1) return false;
    for(int i=2;i<num/i;i++)
    {
        if(num%i==0)
        {
            if(i==num/i)
            {
                sum=sum+i;
            }
            else
            {
                sum=sum+i+num/i;
            }
        }
    }
    if(sum==num)
    {
        return true;
    }
    return false;
}