#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
#define int long long
#define ull unsigned long long 
#define mod 1000000000
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
ll count(ll n){
	ll ans=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans=min(i,ans);
			if(n/i!=i){
				ans=min(ans,n/i);
			}
		}
	}
	return ans;
}
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		for(int i=0;i<1;i++){
			n+=count(n);
		}
		cout<<n+(k-1)*2<<endl;
	}
}