#include <bits/stdc++.h> 

using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    map<int,bool> row;
    map<int,bool> coloumn;
    
	for(int i =0;i<matrix.size();i++)
    {
        for(int j = 0;j<matrix[i].size();j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = true;
                coloumn[j] = true;
            }
        }
    }
    
    for(int i = 0;i<matrix.size();i++)
    {
        for(int j = 0; j<matrix[i].size();j++)
        {
            if(row[i] == true || coloumn[j] == true)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>> matrix(r);

    for(int i =0;i<r;i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin>>temp;
            matrix[i].push_back(temp);
        }
        
    }
    cout<<endl<<endl;
    setZeros(matrix);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<matrix[i][j] << " ";
        }
        cout<<endl;
    }
    
}