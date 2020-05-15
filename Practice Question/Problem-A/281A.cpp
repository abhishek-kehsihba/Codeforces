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
   	ll u=0,l=0;
   	if(isupper(s[0])){
   		cout<<s;
   	}
   	else{
   		s[0]=s[0]-32;
   		cout<<s;
   	}
}
