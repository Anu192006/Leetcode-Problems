int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int sum=0,count=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    int val=sum/k;
    if(val>=threshold)
    {
        count++;
    }
    int st=1,ed=k;
    while(ed<arrSize)
    {
        sum=sum-arr[st-1]+arr[ed];
        int avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        st++;
        ed++;
    }
    return count;
}