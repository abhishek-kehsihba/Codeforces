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
	w(t){
		ll n;cin>>n;
		ll arr[n+1],dp[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];dp[i]=1;
		}
		ll ans=dp[1];
		for(int i=2;i<=n;i++){
			ll mx=0;
			for(int j=1;j*j<=i;j++){
				if(i%j==0){
					ll x=j,y=i/j;
					if(arr[i]>arr[x]){
						mx=max(mx,dp[x]);
					}
					if(arr[i]>arr[y] && y!=i){
						mx=max(mx,dp[y]);
					}
				}
			}
			dp[i]+=mx;
			//cout<<dp[i]<<" ";
			ans=max(ans,dp[i]);
		}
		cout<<ans<<endl;
	}
}