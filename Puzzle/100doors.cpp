#include <iostream>
using namespace std;

int main() {
    int n = 100;
	int a[n];
	bool result[n]={0};
	
	
	
	for(int i = 1 ; i <= n ; i++){
	    
	    for(int j = 1 ; j<=n ; j++){
	        if(j%i==0){
	            if(result[j-1]==1){
	                result[j-1] =0;
	            }else
	            result[j-1] = 1;
	        }
	    }
	    
	    
	}
	
	for(int i = 0 ; i< n ; i++ ){
	     
	    if(result[i]==1){
	        
	    cout<<i+1<<" open state  \n";
	    }else if(result[i]==0){
	        
	    cout<<i+1<<" close state  \n";
	    }
	}
	return 0;
}
