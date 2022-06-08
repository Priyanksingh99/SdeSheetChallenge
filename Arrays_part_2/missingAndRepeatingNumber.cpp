#include <bits/stdc++.h> 

using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> ans;
    int first,second;
    bool flag = false;
    sort(arr.begin(),arr.end());
    vector<int> arr1(n+1,0);
	for(int i =0;i<n;i++)
    {
        arr1[arr[i]]++;
    }
    for(int i =1;i<=n;i++)
    {
        if(arr1[i] == 0)
        {
            first = i;
        }
        if(arr1[i] == 2)
        {
            second = i;
        }
    }
    
    ans.first = first;
    ans.second = second;
    
    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;

    for(int i =0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    pair<int,int> ans = missingAndRepeating(arr,n);

    cout<<ans.first<<" "<<ans.second;
}