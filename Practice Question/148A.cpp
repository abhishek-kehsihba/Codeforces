#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll k,l,m,n,d;
   	cin>>k>>l>>m>>n>>d;
   	int a[d+1]={0};
   	for(int i=k;i<=d;i+=k){
   		if(!a[i]){
   			a[i]=1;
   		}
   	}
   	for(int i=l;i<=d;i+=l){
   		if(!a[i]){
   			a[i]=1;
   		}
   	}
   	for(int i=m;i<=d;i+=m){
   		if(!a[i]){
   			a[i]=1;
   		}
   	}
   	for(int i=n;i<=d;i+=n){
   		if(!a[i]){
   			a[i]=1;
   		}
   	}
   	ll ans=0;
   	for(int i=1;i<=d;i++){
   		if(a[i]==1){
   			ans+=1;
   		}
   	}
   	cout<<ans;
}
