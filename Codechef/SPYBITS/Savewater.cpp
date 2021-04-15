#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    
	    int water;
	    water = h*(x+(y/2));
	    
	    if(c>=water){
	        cout<<"YES \n";
	    }else{
	        cout<<"NO \n";
	    }
	    
	    
	}
	
	return 0;
}
