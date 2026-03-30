int sumOfUnique(int* nums, int numsSize) {
    int sum=0;
    int *a=calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        int val=nums[i];
        a[val]++;
    }
    for(int i=0;i<101;i++)
    {
        if(a[i]==1) sum=sum+i;
    }
    return sum;
}