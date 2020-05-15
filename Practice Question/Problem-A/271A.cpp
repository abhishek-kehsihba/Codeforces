#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll a;
   	cin>>a;
   	ll b,c,d,e;
   	a=a+1;
   	while(1){
   		b=a%10;
   		c=(a/10)%10;
   		d=(a/100)%10;
   		e=(a/1000);
   		if(b!=c && c!=d && d!=e && b!=d && b!=e && c!=e){
   			break;
   		}
   		a=a+1;
   	}
   	cout<<a;
}
