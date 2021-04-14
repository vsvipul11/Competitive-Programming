#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	long long a[n];
	
	for(long long i = 0 ; i< n ; i++){
	    cin>>a[i];
	   
	}


sort(a,a+n);
	
	long long sum=0;
	long long newsum=0;
	long long x = n;

for(long long i = 0 ; i < n ; i++){
    sum = a[i]*x;
    
    newsum = max(sum , newsum);
    sum = 0;
    x=x-1;
}
cout<<newsum;
	return 0;
}
