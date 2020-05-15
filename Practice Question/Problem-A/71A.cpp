#include <iostream>
#include <algorithm>
using namespace std;
#define ll long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        ll x=a.length();
        if(x<=10){
            cout<<a<<endl;
        }
        else{
            cout<<a[0]<<x-2<<a[x-1]<<endl;
        }
    }
    return 0;
}
