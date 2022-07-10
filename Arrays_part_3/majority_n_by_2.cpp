#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    sort(arr,arr+n);
    int maxElement = arr[0];
    int count  = 1;
    int maxCount = INT_MIN;
    int element = arr[0];
    if(n == 1) return arr[0];
    for(int i =1;i<n;i++)
    {
        if(arr[i] == element)
        {
            count++;
            if(count > maxCount)
            {
                maxCount = count;
                maxElement = arr[i];
            }
        }
        else
        {
            count = 1;
            element = arr[i];
        }
    }
    
    if(maxCount <= n/2) return -1;
    else return maxElement;
    
}