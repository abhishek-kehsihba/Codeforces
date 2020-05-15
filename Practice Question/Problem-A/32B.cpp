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
   	int n=s.length();
   	for(int i=0;i<n;i++){
   		if(s[i+1]=='.' && s[i]=='-'){
   			cout<<1;
   			i+=1;
   		}
   		else if(s[i]=='-' && s[i+1]=='-'){
   			cout<<2;
   			i+=1;
   		}
   		else{
   			cout<<0;
   		}
   	}
}
