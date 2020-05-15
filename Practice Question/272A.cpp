#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll n;
   	cin>>n;int x,a=0;
   	for(int i=0;i<n;i++){
   		cin>>x;
   		a+=x;
   	}
   	ll ans=0;
   	for(int i=1;i<=5;i++){
   		if((a+i)%(n+1)!=1){ans+=1;}
   	}
   	cout<<ans;
}
