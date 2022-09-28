#include<bits/stdc++.h> //Sum all the subarray of an array
#define vi vector<int>
#define I int
#define pb push_back
using namespace std;
int subarraySum(int arr[],int n)
{
    int contribution[n+1],sum=0;
    for(int i=1;i<=n;i++)
    {
        contribution[i]=(i*(n-i+1)*arr[i-1]);
    }

    for(int i=1;i<=n;i++)
    {
        sum+=contribution[i];
    } 
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
   int k=subarraySum(arr,n);
   cout<<k;
}