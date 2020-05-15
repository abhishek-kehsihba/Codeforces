#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 	#endif
 	string a;
 	cin>>a;
 	string b="hello";
 	ll i=0,j=0;
 	while(i!=a.length()){
 		if(a[i]==b[j]){
 			j+=1;
 		}
 		i+=1;
 	}
 	if(j>=5){
 		cout<<"YES";
 	}
 	else{
 		cout<<"NO";
 	}
	return 0;
}
