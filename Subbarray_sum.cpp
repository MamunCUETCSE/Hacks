#include<bits/stdc++.h>
//subarray sum or sum between a range using prefix sum dp technique
using namespace std;
int Subsum(int arr[],int n,int l, int r)
{
    int prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
     prefix[i]=prefix[i-1]+arr[i-1];

    }
    int sum=prefix[r]-prefix[l-1];
    return sum;
}
int main()
{
    int n,l,r;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>l>>r;
    int k=Subsum(arr,n,l,r);
    cout<<k;
 return 0;
}
