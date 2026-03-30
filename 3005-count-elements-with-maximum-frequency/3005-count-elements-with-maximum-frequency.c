int maxFrequencyElements(int* nums, int numsSize) {
    int *a=calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        a[nums[i]]++;
    }
    int max=0;
    for(int i=0;i<=100;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<=100;i++)
    {
        if(a[i]==max){
            sum=sum+a[i];
        }
    }
    return sum;
}