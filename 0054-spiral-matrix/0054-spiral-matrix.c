/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** A, int r, int* matrixColSize, int* returnSize) {
    int c=matrixColSize[0];
    int t=r*c;
    int *res=calloc(t,sizeof(int));
    int minR=0,maxR=r-1,minC=0,maxC=c-1,idx=0;
    while(idx<t){
        for(int j=minC;j<=maxC && idx<t;j++)
        {
            res[idx++]=A[minR][j];
        }
        minR++;
        for(int i=minR;i<=maxR && idx<t;i++)
        {
            res[idx++]=A[i][maxC];
        }
        maxC--;
        for(int j=maxC;j>=minC && idx<t;j--)
        {
            res[idx++]=A[maxR][j];
        }
        maxR--;
        for(int i=maxR;i>=minR && idx<t;i--)
        {
            res[idx++]=A[i][minC];
        }
        minC++;
    }
    *returnSize=r*c;
    return res;
}