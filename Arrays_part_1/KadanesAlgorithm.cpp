#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    long long int maxi = arr[0];
    
    if(n==0) return 0;
    if(n==1) return arr[0];
    
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum = 0;
        }
        maxi = max(sum,maxi);
    }
    
    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<maxSubarraySum(arr,n);   
}