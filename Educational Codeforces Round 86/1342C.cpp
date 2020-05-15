#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define vi vector<ll>
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
#define N 100009
ll dp[N],pre[N];
int32_t main() {
	kehsihba();
	w(t){
		ll a,b,q;
		cin>>a>>b>>q;
		ll x=(a*b)/__gcd(a,b);
		if(b>a){swap(a,b);}
		auto ans = [&](ll u){ll res = (u/x)*(x - a);u %= x;if(u >= a) res += (u - a + 1);return res;};
		for(int i=0;i<q;i++){
			ll l,r;
			cin>>l>>r;
			cout << ans(r) - ans(l - 1) << " ";
		}
		cout<<endl;
	}
}
