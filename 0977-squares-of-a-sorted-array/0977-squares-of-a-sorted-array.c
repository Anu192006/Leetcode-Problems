/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *ans=(int*)malloc(numsSize*sizeof(int));
    int i=0,j=numsSize-1,idx=numsSize-1;
    while(i<=j)
    {
        int m1=nums[i]*nums[i];
        int m2=nums[j]*nums[j];
        if(m1>m2)
        {
            ans[idx--]=m1;
            i++;
        }
        else
        {
            ans[idx--]=m2;
            j--;
        }
    }
    *returnSize=numsSize;
    return ans;
}