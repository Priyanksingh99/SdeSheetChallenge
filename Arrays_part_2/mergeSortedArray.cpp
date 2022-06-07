#include<bits/stdc++.h>

using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        if(m == 0)
        {
            nums1= nums2;
            return;
        }
        else if(n == 0)
        {
            return;
        }
        
        for(int i =0; i<m;i++)
        {
            if(nums1[i] >= nums2.front())
            {
                swap(nums2.front(),nums1[i]);
                sort(nums2.begin(),nums2.end());
            }
        }
        
        for(int i =0 ; i< n;i++)
        {
            swap(nums1[m+ i],nums2[i]);
        }
        
    }


int main()
{
    int n,m;
    cin>>m>>n;
    vector<int> arr1;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    for (int i = m; i < m+n; i++)
    {
        
        arr1.push_back(0);
    }
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }

    

    merge(arr1,m,arr2,n);

    for (int i = 0; i < m+n; i++)
    {
        
        cout<<arr1[i]<<" ";
    }


}
