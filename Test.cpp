int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int totsum=0;
        for(int r=0;r<n;r++)
        totsum+=a[r];
        
        if(totsum==k)
        return n;
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            totsum-=a[i];
            if(totsum==k)
            {
                maxi=n-i-1;
                break;
            }
        }
        return maxi;
    } 