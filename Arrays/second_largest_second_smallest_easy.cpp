//T.C - O(N)
// approach: we make 2 functions to find the largest and smallest respectively
// to find the 2nd largest we assume the 1st element to be the largest and then find the 
// largest element in the array, and update the second largest element, basically following the 
// classroom scenario, if someone got more marks than you, you become 2nd.
// we also check for the worst case, if the 2nd largest is smaller than largest and greater than slargest
// to check for 2nd smallest we follow the same approach and add one condition to check if the number is not 
// equal to the smallest number and if that number is lesser than second smallest.

int findslargest(vector<int> a,int n)
{
    int largest,slargest=-1;
    largest = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            slargest = largest;
            largest = a[i];

        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int findssmallest(vector<int> a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = findslargest(a,n);
    int ssmallest = findssmallest(a,n);

    return {slargest,ssmallest};   


}
