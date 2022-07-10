#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
    int start = 0;
    int end = arr.size() - 1;
    int j = 0;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size();i++)
    {
        for(int j =i+1;j<arr.size();j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);    
                ans.push_back(temp);
            }
        }
    }
    
    return ans;
}