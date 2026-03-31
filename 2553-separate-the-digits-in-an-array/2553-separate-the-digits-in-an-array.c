/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)malloc(sizeof(int)*numsSize*10);
    int k=0;
    for(int i=0;i<numsSize;i++){
        int temp[10];
        int t=0;
        int num=nums[i];
        while(num>0){
            temp[t++]=num%10;
            num/=10;
        }
        for(int j=t-1;j>=0;j--)
        {
            res[k++]=temp[j];
        }
    }
    *returnSize=k;
    return res;
}