int pivotIndex(int* nums, int numsSize) {
    int pf[numsSize];
    pf[0]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        pf[i]=pf[i-1]+nums[i];
    }
    int sf[numsSize];
    sf[numsSize-1]=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--)
    {
        sf[i]=sf[i+1]+nums[i];
    }
    int ls,rs;
    for(int i=0;i<numsSize;i++)
    {
        if(i==0) ls=0;
        else ls=pf[i-1];
        if(i==numsSize-1) rs=0;
        else rs=sf[i+1];
        if(ls==rs) return i;
    }
    return -1;
}