#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n>>k;
	    string str;
	     cin.ignore(numeric_limits<streamsize>::max(),'\n');
	     getline(cin , str);
	     
	     int c=0;
	     for(int i = 0; i<n ;i++){
	         if(str[i]=='*'){
	            c++;
	         }else{
	             if(c==k){
	                 break;
	             }else{
	               c=0;  
	             }
	             
	         }
	     }
	     if(c==k){
	         cout<<"YES"<<endl;
	     }else{
	         cout<<"NO"<<endl;
	     }
	     
	     
	     
	}
	return 0;
}
