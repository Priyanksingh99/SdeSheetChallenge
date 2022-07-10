#include <bits/stdc++.h> 

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    map<int,int> mp;
    int n = arr.size();
    for(auto x:arr)
    {
        mp[x]++;
    }
    
    for(auto x:mp)
    {
        if(x.second > (float)n/3)
        {
            ans.push_back(x.first);
        }
    }
    
    return ans;
}