double findMaxAverage(int* nums, int numsSize, int k) {
   int sum=0;
   for(int i=0;i<k;i++)
   {
    sum+=nums[i];
   }
   int ms=sum;
   int st=1,ed=k;
   while(ed<numsSize)
   {
    sum=sum-nums[st-1]+nums[ed];
    if(sum>ms){
        ms=sum;
    }
    st++;
    ed++;
   }
   return (double)ms/k;
}