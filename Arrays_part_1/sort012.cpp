#include <bits/stdc++.h> 

using namespace std;

void sort012(int *arr, int n)
{
    int first = 0;
    int last = n-1;
    int mid = 0;
    
    while(mid<=last)
    {
        if(arr[mid] == 0)
        {
            swap(arr[first++],arr[mid++]);
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid],arr[last--]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort012(arr,n);

    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}