#include <iostream>
#include <algorithm>
using namespace std;
#define ll long
int main(){
    ll n,ans=0,a,b,res=0;
    cin>>n;
    cin>>a>>b;
    ans=b;
    ll t=n-1;
    while(t--){
        if(ans>res){
            res=ans;
        }
        cin>>a>>b;
        ans+=(b-a);
    }
    cout<<res;
    return 0;
}
