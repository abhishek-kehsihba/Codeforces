#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	ll s1,s2,s3;
   	cin>>s1>>s2>>s3;
   	ll ans=4*(sqrt((s1*s2)/s3)+sqrt((s2*s3)/s1)+sqrt((s1*s3)/s2));
   	cout<<ans;
}
