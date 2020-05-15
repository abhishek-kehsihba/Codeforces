#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
#define ff first
#define ss second
#define ll long long
#define int long long
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string
#define all(v) v.begin(),v.end()
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main() {
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		ll arr[n],pre[n]={0};
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=1;i<(n-1);i++){
			if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
				pre[i]=1;
			}
		}
		for(int i=1;i<n;i++){
			pre[i]+=pre[i-1];
		}
		vi ans;
		for(int i=0;i<(n-k+1);i++){
			ans.pb(pre[i+k-2]-pre[i]);
		}
		ll mx=-mod;
		for(auto i:ans){
			mx=max(mx,i);
		}
		n=ans.size();
		for(int i=0;i<n;i++){
			if(ans[i]==mx){
				cout<<mx+1<<" "<<i+1<<endl;
				break;
			}
		}
	}
}
