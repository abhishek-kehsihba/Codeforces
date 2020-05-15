#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	string s;
   	cin>>s;
   	std::map<char, int> m;
   	ll n=s.length();char a='4',b='7';
   	for(int i=0;i<n;i++){
   		m[s[i]]+=1;
   	}
   	ll x=m[a]+m[b];
   	string y=to_string(x);
   	n=y.length();
   	m[a]=0;m[b]=0;
   	for(int i=0;i<n;i++){
   		m[y[i]]+=1;
   	}
   	if(m[a]+m[b]==n){
   		cout<<"YES";
   	}
   	else{
   		cout<<"NO";
   	}
}
