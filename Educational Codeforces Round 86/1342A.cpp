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
int32_t main() {
	kehsihba();
	w(t){
		ll x,y,a,b;
	cin>>x>>y;
	cin>>a>>b;
	if(x==0 && y==0){
		cout<<0<<endl;
	}
	else{
		ll m=min(x,y);
		ll n=max(x,y);
		ll ans1=((n-m)*a)+(m*b);
		ll ans2=(x+y)*a;
		cout<<min({ans1,ans2})<<endl;
	}
	}
}
