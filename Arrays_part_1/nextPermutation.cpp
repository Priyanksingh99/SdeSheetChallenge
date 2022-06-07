#include <bits/stdc++.h> 

using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i;
    int j;
    for(i= permutation.size() - 2;i>= 0;i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            break;
        }
    }
    
    if(i<0)
        reverse(permutation.begin(),permutation.end());
    else
        {
        for(j=permutation.size()-1;j>=i;j--)
            if(permutation[j]>permutation[i])
                break;
        swap(permutation[i],permutation[j]);
        reverse(permutation.begin()+i+1,permutation.end());
    }
    
    return permutation;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    vector<int> ans = nextPermutation(arr,n);

    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    
}