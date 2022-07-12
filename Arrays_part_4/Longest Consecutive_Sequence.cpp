#include <bits/stdc++.h> 

using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int maxCount = INT_MIN;
    int count = 1;
    sort(arr.begin(),arr.end());
    if(arr.size() == 1) return 1;
    for(int i =1;i<arr.size();i++)
    {
        if(arr[i]-1 == arr[i-1])
        {
            count++;
            maxCount = max(maxCount,count);
        }
        else if(arr[i] == arr[i-1])
        {
            
            maxCount = max(maxCount,count);
            continue;
        }
        else 
        {
            maxCount = max(maxCount,count);
            count = 1;
        }
    }
    
    return maxCount;
}