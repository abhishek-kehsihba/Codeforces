#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
#define int long long
#define ull unsigned long long 
#define mod 1000000
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define str string
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
#define all(v) v.begin(), v.end()
int32_t main(){
	kehsihba();
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll pre[n];
	pre[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		pre[i]=__gcd(pre[i+1],arr[i]);
	}
	ll ans[n-1];
	for(int i=0;i<n-1;i++){
		ans[i]=(arr[i]*pre[i+1])/__gcd(arr[i],pre[i]);
	}
	ll res=ans[0];
	for(int i=1;i<n-1;i++){
		res=__gcd(res,ans[i]);
	}
	cout<<res;
}