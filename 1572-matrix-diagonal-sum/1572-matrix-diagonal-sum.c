int diagonalSum(int** mat, int matSize, int* matColSize) {
    int c=matColSize[0];
    int p1=0;
    int p2=c-1;
    int sum=0;
    for(int i=0;i<matSize;i++)
    {
        if(p1!=p2)
        {
            sum=sum+mat[i][p1]+mat[i][p2];
        }
        else
        {
            sum=sum+mat[i][p1];
        }
        p1++;
        p2--;
    }
    return sum;
}