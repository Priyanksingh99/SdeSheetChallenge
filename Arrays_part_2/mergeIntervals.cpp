#include<bits/stdc++.h>


using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int prev;
    int last;
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    for(int i =0;i<intervals.size();i++)
    {
        if(i == 0)
        {
            prev = intervals[i][0];
            last = intervals[i][1];
        }
        else
        {
            if(intervals[i][0]>last)
            {
                ans.push_back({prev,last});
                prev = intervals[i][0];
                last = intervals[i][1];
            }
            else if(intervals[i][1]>last)
            {
                last = intervals[i][1];
            }
            
        }
    }
    
    ans.push_back({prev,last});

    return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> vec;
    vector<vector<int>> ans;

    for(int i =0;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        vec.push_back({temp1,temp2});
    }

    ans = mergeIntervals(vec);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

}