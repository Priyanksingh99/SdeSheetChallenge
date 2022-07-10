#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    // Write your code here.
    int res = 1;
    long long xx = x;
    xx = xx%m;
    if(xx == 0) return 0;
    
    while(n>0)
    {
        if(n & 1)
        {
            res = (res*xx) %m;
            
        }
        
       n =  n>>1;
       
        xx = xx*xx % m;
        
        
    }
    return res;
}