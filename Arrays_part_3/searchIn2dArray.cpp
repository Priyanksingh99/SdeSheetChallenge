#include <bits/stdc++.h> 
#include <vector>

using namespace std;



bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    for(auto x: mat)
    {
        if(target>= x[0] && target<=x[n-1])
        {
            for(auto y:x)
            {
                if(y == target)
                {
                    return true;
                }
            }
        }
    }
    return false;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int m,n,target;
    cin>>m>>n>>target;
    vector<vector<int>> vec;
    for(int i =0 ;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            int temp;
            cin>>temp;
            vec[i].push_back(temp);
        }
    }

    cout<<findTargetInMatrix(vec,m,n,target);

    }
}