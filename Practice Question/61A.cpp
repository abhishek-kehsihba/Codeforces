#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	string a,b;cin>>a;cin>>b;
   	ll n=a.length();
   	for(int i=0;i<n;i++){
   		if((a[i]=='1' && b[i]=='0' )|| (a[i]=='0' && b[i]=='1')){
   			a[i]='1';
   		}
   		else{
   			a[i]='0';
   		}
   	}
   	cout<<a;
}
