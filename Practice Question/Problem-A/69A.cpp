#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 	#endif
 	ll a;
 	cin>>a;
 	ll x=0,y=0,z=0;
 	while(a--){
 		ll m,n,o;
 		cin>>m>>n>>o;
 		x+=m;y+=n;z+=o;
 	}
 	if(x==0 && y==0 && z==0){cout<<"YES";}
 	else{
 		cout<<"NO";
 	}
	return 0;
}
