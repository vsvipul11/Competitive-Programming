#include <iostream>
using namespace std;


int main() {
	int n,h,x;
	cin>>n>>h>>x;
	int a[n];
	bool flag = 0;
	for(int i = 0 ; i< n ;i++){
	    cin>>a[i];
	}
	
	for(int i = 0 ; i<n ; i++){
	    if(a[i]+ x>=h){
	        cout<<"Yes";
	        flag = 1;
	        break;
	    }
	}
	if(flag==0){
	    cout<<"No";
	}
	return 0;
}
