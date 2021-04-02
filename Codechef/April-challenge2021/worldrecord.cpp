#include <iostream>
using namespace std;
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        float k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        float var = k1*k2*k3*v;
        var = 100/var;
       
        float x = round(var);
        if(x<=9.57){
            cout<<"YES"<<endl;
            
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
	return 0;
}
