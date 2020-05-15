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
   	for(int i=0;i<s.length();i++){
   		if(isupper(s[i]))u+=1;
   		else l+=1;
   	}
   	if(u<=l){
   		transform(s.begin(), s.end(), s.begin(), ::tolower); 
   		cout<<s;
   	}
   	else{
   		transform(s.begin(), s.end(), s.begin(), ::toupper); 
   		cout<<s;
   	}
}
