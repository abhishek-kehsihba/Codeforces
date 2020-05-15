#include <iostream>
#include <algorithm>
using namespace std;
#define ll long
int main(){
    ll a;
    cin>>a;
    ll arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    ll c_min=arr[0],c_max=arr[0];
    ll ans=0;
    int i=1;
    for(i=1;i<a;i++){
        if(arr[i]<c_min){
            c_min=arr[i];
            ans+=1;
        }
        else if(arr[i]>c_max){
            c_max=arr[i];
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}
