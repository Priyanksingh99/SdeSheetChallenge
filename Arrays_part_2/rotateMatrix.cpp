#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
        
        for(int i =0;i<matrix.size();i++)
        {
            for(int j =0;j<i;j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n);

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin>>temp;
            matrix[i].push_back(temp);
        }
        
    }

    rotate(matrix);

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}