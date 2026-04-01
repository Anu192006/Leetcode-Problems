/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int r, int* ColSize, int* returnSize, int** returnColumnSizes) {
    int c=ColSize[0];
    int nr=c,nc=r;
    int** b=calloc(nr,sizeof(int*));
    for(int i=0;i<nr;i++){
        b[i]=calloc(nc,sizeof(int));
    }
    for(int i=0;i<nr;i++)
    {
        for(int j=0;j<nc;j++)
        {
            b[i][j]=matrix[j][i];
        }
    }
    *returnSize=nr;
    *returnColumnSizes=calloc(nr,sizeof(int));
    for(int i=0;i<c;i++)
    {
        (*returnColumnSizes)[i]=nc;
    }
    return b;
}