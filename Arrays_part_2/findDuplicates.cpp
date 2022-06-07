#include <bits/stdc++.h> 

using namespace std;

int findDuplicate(vector<int> &arr, int n){
	map<int,int> mp;
    int i;
    for(i =0;i<arr.size();i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]] == 2)
        {
            break;
        }
    }
    
    return arr[i];
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

    cout<<findDuplicate(arr,n);

}