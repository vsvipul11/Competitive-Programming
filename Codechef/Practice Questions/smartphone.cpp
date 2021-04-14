#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	long long a[n];
	
	for(long long i = 0 ; i< n ; i++){
	    cin>>a[i];
	   
	}
	
	int sum=0;
	int newsum=0;


for(long long i = 0 ; i< n ; i++){
    for(long long j = 0 ; j< n ; j++){
        if(a[j]>=a[i]){
            sum += a[i]; 
        }
        
    }
    
    newsum = max(sum , newsum);
    sum=0;
}
cout<<newsum;
	return 0;
}
