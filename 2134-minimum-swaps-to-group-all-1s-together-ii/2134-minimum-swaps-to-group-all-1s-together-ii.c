int minSwaps(int* nums, int numsSize) {
      int gcnt=0,bcnt=0,min=0;
      for(int i=0;i<numsSize;i++){
        if(nums[i]==1) gcnt++;
      }
      for(int j=0;j<gcnt;j++)
      {
        if(nums[j]==0) bcnt++;
      }
      if(bcnt==0) return 0;
      min=bcnt;
      int st=1,end=gcnt;
      while(st<numsSize){
        if(nums[st-1]==0) bcnt--;
        if(nums[end%numsSize]==0) bcnt++;
        if(bcnt==0) return 0;
        if(bcnt<min) min=bcnt;
        st++;
        end++;
      }
      return min;
}