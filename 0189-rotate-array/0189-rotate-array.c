void ReverseInteger(int *nums,int st,int end)
{
    while(st<end)
    {
        int temp=nums[st];
        nums[st]=nums[end];
        nums[end]=temp;
        st++;
        end--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
    ReverseInteger(nums,numsSize-k,numsSize-1);
    ReverseInteger(nums,0,numsSize-k-1);
    ReverseInteger(nums,0,numsSize-1);
}