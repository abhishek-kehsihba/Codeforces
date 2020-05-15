#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll a,b;
   	cin>>a>>b;
   	ll ans=0;
   	ll x=max(a,b);
   	for(int i=0;i<=x;i++){
   		for(int j=0;j<=x;j++){
   			if(i*i+j==a && i+j*j==b){
   				ans+=1;
   			}
   		}
   	}
   	cout<<ans;
}
