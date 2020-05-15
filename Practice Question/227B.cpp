#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll n,x;
   	cin>>n;
   	std::map<ll, ll> m;
   	for(int i=0;i<n;i++){
   		cin>>x;
   		m[x]=i+1;
   	}
   	cin>>x;
   	ll a=0,a2=0;
   	ll y;
   	while(x--){
   		cin>>y;
   		a+=m[y];
   		a2+=(n-m[y]+1);
   	}
   	cout<<a<<" "<<a2;
}
