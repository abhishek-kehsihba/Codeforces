#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	string s;cin>>s;
   	bool b=true;
   	for(int i=0;i<s.length();i++){
   		if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
   			cout<<"YES";b=false;
   			break;
   		}
   	}
   	if(b){
   		cout<<"NO";
   	}
}
