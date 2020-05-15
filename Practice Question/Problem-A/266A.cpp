#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll n;cin>>n;
   	string s;
   	cin>>s;
   	ll r=0,g=0,b=0;
   	for(int i=1;i<n;i++){
   		if(s[i]==s[i-1]){
   			if(s[i]=='R')
   				++r;
   			else if(s[i]=='G')
   				++g;
   			else
   				++b;
   		}
   	}
   	cout<<r+g+b;
}
