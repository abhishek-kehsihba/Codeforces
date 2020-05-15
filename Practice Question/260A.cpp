#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll a,b,n;
   	cin>>a>>b>>n;
   	ll x;ll d;bool y=false;
   	for(int i=0;i<1 && !y;i++){
   		x=a;
   		for(int i=0;i<10;i++){
   			d=a*10+i;
   			if(d%b==0){
   				a=d;
   				break;
   			}
   		}
   		if(a==x){
   			cout<<-1;
   			y=true;
   			break;
   		}
   	}
   	if(!y){
   		cout<<d;
   		for(int i=0;i<(n-1);i++){cout<<0;}
}
}
