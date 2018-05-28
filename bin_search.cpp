int bin_search(int A[], int left, int right, int k)
{
    int s=-1;
    if(left>right)
    {
    return -1;
    }
    
     s=left+right;
     s=s/2;
     if(A[s]==k)
     {
         return s;
     }
     if(A[s]<k)
     {
       return  bin_search(A,s+1,right,k);
     }
     if(A[s]>k)
     {
       return  bin_search(A,left,s-1,k);
     }
}
