bool isPerfectSquare(int num) {
    if(num<2) return true;
    long l=1,r=num/2;
    while(l<=r)
    {
        long m=l+(r-l)/2;
        long sq=m*m;
        if(sq==num) return true;
        else if(sq<num) l=m+1;
        else r=m-1;
    }
    return false;
}