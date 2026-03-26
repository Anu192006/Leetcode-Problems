int largestAltitude(int* gain, int gainSize) {
    int cur=0;
    int max=0;
    for(int i=0;i<gainSize;i++)
    {
        cur+=gain[i];
        if(cur>max){
            max=cur;
        }
    }
    return max;
}