int findSpecialInteger(int* arr, int arrSize) {
    int val=arrSize/4;
    int count=1;
    for(int i=0;i<arrSize-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count>val)
        {
            return arr[i];
        }
    }
    return arr[arrSize/4];
}