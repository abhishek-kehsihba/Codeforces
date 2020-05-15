#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll n,x;cin>>n;
   	map<int,int>m;
   	ll ans=0,cur=0;
   	for(int i=0;i<2*n;i++){
   		cin>>x;
   		if(m[x]==0){
   			m[x]+=1;
   			cur+=1;
   		}
   		else if(m[x]==1){
   			cur-=1;m[x]=0;
   		}
   		if(cur>ans){
   			ans=cur;
   		}

   	}
   	cout<<ans;
}
