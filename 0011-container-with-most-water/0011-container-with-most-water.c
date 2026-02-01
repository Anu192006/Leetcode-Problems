int maxArea(int* height, int heightSize) {
    int l=0;
    int r= heightSize-1;
    int maxArea=0;
    while(l<r)
    {
        int h=height[l]<height[r]?height[l]:height[r];
        int width=r-l;
        int area=h*width;
        if(area>maxArea)
        {
            maxArea=area;
        }
        if(height[l]<height[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    return maxArea;
}