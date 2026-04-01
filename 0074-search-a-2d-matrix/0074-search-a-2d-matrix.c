bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int c=matrixColSize[0];
    int i=0,j=c-1;
    while(i<matrixSize && j>=0){
        if(target<matrix[i][j])
        {
            j--;
        }
        else if(target>matrix[i][j])
        {
            i++;
        }
        else
        {
            return true;
        }
    }
    return false;
}