#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{ 
  int t; 
  cin>>t;
  while(t--){
    int n, a[n]; 
    cin>>n; 
    for(int i=0 ; i<n ; i++)
      cin>>a[i]; 
      
    sort(a,a+n,greater<int>());
    
    int b1=0, b2=0; 
    
    for(int i=0 ; i<n ; i++)
    {
      if(b1 < b2)
        b1 += a[i]; 
        
      else 
        b2 += a[i];
    }
    
    if(b1 > b2)
      cout<<b1<<endl;
    else
      cout<<b2<<endl;
  }
  return 0;
}
