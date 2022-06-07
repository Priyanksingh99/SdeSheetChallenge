#include <bits/stdc++.h> 

using namespace std;


int maximumProfit(vector<int> &prices){
    int minEle = prices[0];
    int maxElement = INT_MIN;
    
    
    for(int i=1;i<prices.size();i++)
    {
        minEle = min(minEle,prices[i]);
        maxElement = max(maxElement,prices[i]-minEle);
    }
    
    return maxElement;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> price;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        price.push_back(temp);
    }

    int profit = maximumProfit(price);

    cout<<profit;
    
}