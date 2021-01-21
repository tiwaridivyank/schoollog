#include <bits/stdc++.h> 
using namespace std; 
  
int xSum(int n, int m) 
{ 
        
    int res = 0; 
	int multiplier = 1; 
	int bit_sum; 
  
    while (n || m) { 
  
     
        bit_sum = (n % 10) + (m % 10); 
        bit_sum %= 10; 
          
        res = (bit_sum * multiplier) + res; 
        n /= 10; 
        m /= 10; 
     
        multiplier *= 10; 
    } 
    return res; 
} 
  
int main() 
{ 
    int n,m ;
	cin>>n;
	cin>>m;
    cout << xSum(n, m); 
    return 0; 
} 