#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll a[4],cnt=0;
   	cin>>a[0]>>a[1]>>a[2]>>a[3];
   	sort(a,a+4);
   	for(int i=0;i<3;i++){
   		if(a[i]==a[i+1]){
   			cnt+=1;
   		}
   	}
   	cout<<cnt;
}
