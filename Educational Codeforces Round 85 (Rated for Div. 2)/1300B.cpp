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

   	ll n;
   	cin>>n;
   	n*=2;
   	int arr[n];
   	for(int i=0;i<n;i++){cin>>arr[i];}
   	sort(arr,arr+n);
   	cout<<arr[n/2]-arr[n/2-1]<<endl;
   	}

}