#include <bits/stdc++.h> 

using namespace std;


vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans(n);
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<=i;j++)
        {
            if(i == j || j == 0)
            {
                ans[i].push_back(1);
            }
            else
            {
                long long int temp = ans[i-1][j-1] + ans[i-1][j];
                ans[i].push_back(temp);
            }
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<long long int>> ans = printPascal(n);

    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
