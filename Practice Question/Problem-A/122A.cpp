#include <iostream>
using namespace std;
#define ll long
int main(){
    ll a;cin>>a;
    ll ans=0;
    int b[]={4,7,44,77,47,74,444,447,474,477,777,774,744,747,4444,4447,4474,4477,4744,4747,4774,4777,7777,7774,7747,7744,7477,7474,7447,7444};
    for(int i=0;i<30;i++){
        if(a%b[i]==0){
        ans=1;
        }   
    }
    string h=(ans==1)?"YES":"NO";
    cout<<h;
}
