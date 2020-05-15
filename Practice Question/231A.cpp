#include <iostream>
using namespace std;
#define ll long
int main(){
    ll a,x,y,z,ans=0;
    cin>>a;
    while(a--){
        cin>>x>>y>>z;
        if(x+y+z>=2){
            ans+=1;
        }
    }
    cout<<ans;
}
