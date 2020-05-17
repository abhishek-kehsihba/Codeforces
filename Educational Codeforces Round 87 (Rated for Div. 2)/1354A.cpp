#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define ull unsigned long long
#define mod 1000000007
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
int32_t main() {
	kehsihba();
	w(t) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		a = a - b;
		if(a<=0){cout<<b<<endl;continue;}
		ll x = a;
		if ( d>=c) {
			cout << -1 << endl;
		}
		else {
			ll y=(c-d);
			if(a%y==0){
				y=a/y;
			}
			else{
				y=(a/y)+1;
			}
			ll ans=b+y*(c);
			cout<<ans<<endl;
		}
	}
	return 0;
}