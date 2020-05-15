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
#define p(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define test cout<<"LOL_ABHISHEK"<<endl;
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;cin>>n>>k;str s;cin>>s;
		ll pre[n]={0};
		for(int i=0;i<n;i++){
			if(i==0){pre[i]=s[i]-'0';}
			else{
				pre[i]+=pre[i-1]+s[i]-'0';
			}
		}
		int dp[n]={0};
		for(int i=n-1;i>=0;i--){
			int x=(s[i]-'0')^1;
			if(i+k-1<n){
				x+=pre[i+k-1]-pre[i];
			}
			else{
				x+=pre[n-1]-pre[i];
			}

			if(i+k<n){
				x+=dp[i+k];
			}
			int y=pre[n-1]-pre[i]+(s[i]-'0');
			dp[i]=min(x,y);
		}
		ll ans=INT_MAX;
		for(int i=0;i<n;i++){
			ll x=dp[i];
			if(i)
				x+=pre[i-1];
			ans=min(ans,x);
		}
		cout<<ans<<endl;
	}
}