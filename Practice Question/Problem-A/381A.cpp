#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test ll t;cin>>t;while(t--)
int main(){
	#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
  	#endif
    ll a;
    cin>>a;
    ll arr[a];ll i,j;
    for(i=0;i<a;i++){cin>>arr[i];}
	i=0;
	j=a-1;
	ll m=0,n=0;
	ll x=0;
	while(i<=j){
		if(x%2==0){ 
			m+=max(arr[i],arr[j]);
			if(max(arr[i],arr[j])==arr[i]){i+=1;}
			else{j-=1;}
		}
		else{
			n+=max(arr[i],arr[j]);
			if(max(arr[i],arr[j])==arr[i]){i+=1;}
			else{j-=1;}
		}
		x+=1;
	}
	cout<<m<<" "<<n;
}
