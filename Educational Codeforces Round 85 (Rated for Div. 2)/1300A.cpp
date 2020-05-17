#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	bool b=true;
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll t;
   	cin>>t;
   	while(t--){
   		ll n,ad=0,prod=1,o=0;
   		cin>>n;
   		int arr[n];
   		for(int i=0;i<n;i++){
   			cin>>arr[i];
   			ad+=arr[i];
   			prod*=arr[i];
   			if(arr[i]==0){o+=1;}
   		}
   		if(ad+o==0){
   			cout<<o+1<<endl;
   		}
   		else{
   			cout<<o<<endl;
   		}
   	}

}