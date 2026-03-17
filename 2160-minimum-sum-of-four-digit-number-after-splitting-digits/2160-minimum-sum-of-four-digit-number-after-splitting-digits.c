int minimumSum(int num) {
    int min1=10,min2=10,max1=-1,max2=-1;
    int div=1;
    while(div<=num)
    {
        int ed=(num%(div*10))/div;
        if(ed<min1)
        {
            min2=min1;
            min1=ed;
        }
        else if(ed<min2)
        {
            min2=ed;
        }
        div=div*10;
    }
    div=1;
    while(div<=num)
    {
        int ed=(num%(div*10))/div;
        if(ed>max1)
        {
            max2=max1;
            max1=ed;
        }
        else if(ed>max2)
        {
            max2=ed;
        }
        div=div*10;
    }
    return ((min1*10)+max1)+((min2*10)+max2);
}