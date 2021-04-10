#include<iostream>
using namespace std;

int solve(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        int t=n%10;
        if(t==4){
          count++;
        }
        n/=10;
    }
    cout<<count<<'\n';
    }


int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    
}
