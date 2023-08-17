int isSorted(int n, vector<int> a) {
    // Write your code here.
    //int small = a[0];
    //int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
            break;
        }
    }
    return 1;
}
