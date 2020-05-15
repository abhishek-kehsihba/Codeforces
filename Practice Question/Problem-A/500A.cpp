#include<bits/stdc++.h>
using namespace std;
int main(){
	bool b=true;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	int n,k;
   	cin>>n>>k;
   	vector<int>v(n,0);
   	for(int i=0;i<n-1;i++){
   		cin>>v[i];
   	}
   	vector<int>ans;
   	int x=0;
   	ans.push_back(1);
   	int i=0;
   	while(i<n-1){
   		x=(i+1)+v[i];
   		ans.push_back(x);
   		i=x-1;   	
   	}
   	for(auto i:ans){if(i==k){
   		b=false;
   		cout<<"YES";
   	}}
   	if(b){cout<<"NO";}

}
