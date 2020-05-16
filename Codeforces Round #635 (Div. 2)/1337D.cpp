#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 4e18
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define pb push_back
#define mp make_pair
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string
#define all(v) v.begin(),v.end()
void kehsihba(){
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
ll solve(ll a,ll b,ll c){
	return (a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
}
int32_t main() {
	kehsihba();
	w(t){
		ll n[3];
		for(int i=0;i<3;i++){
			cin>>n[i];
		}
		vi a(n[0]),b(n[1]),c(n[2]);
		for(int i=0;i<n[0];i++){
			cin>>a[i];
		}
		for(int i=0;i<n[1];i++){
			cin>>b[i];
		}
		for(int i=0;i<n[2];i++){
			cin>>c[i];
		}
		sort(all(a));
		sort(all(b));
		sort(all(c));
		ll ans=mod;
		for(int i=0;i<n[0];i++){
			auto it=lower_bound(all(b),a[i]);
			auto it1=lower_bound(all(c),a[i]);
			if(it!=b.end() && it1!=c.end()){ans=min(ans,solve(a[i],*it,*it1));}
			if(it!=b.begin() && it1!=c.end()){ans=min(ans,solve(a[i],*prev(it),*it1));}
			if(it!=b.end() && it1!=c.begin()){ans=min(ans,solve(a[i],*prev(it1),*it));}
			if(it!=b.begin() && it1!=c.begin()){ans=min(ans,solve(a[i],*prev(it),*prev(it1)));}
		}
		for(int i=0;i<n[1];i++){
			auto it=lower_bound(all(a),b[i]);
			auto it1=lower_bound(all(c),b[i]);
			if(it!=a.end() && it1!=c.end()){ans=min(ans,solve(b[i],*it,*it1));}
			if(it!=a.begin() && it1!=c.end()){ans=min(ans,solve(b[i],*prev(it),*it1));}
			if(it!=a.end() && it1!=c.begin()){ans=min(ans,solve(b[i],*prev(it1),*it));}
			if(it!=a.begin() && it1!=c.begin()){ans=min(ans,solve(b[i],*prev(it),*prev(it1)));}
		}
		for(int i=0;i<n[2];i++){
			auto it=lower_bound(all(b),c[i]);
			auto it1=lower_bound(all(a),c[i]);
			if(it!=b.end() && it1!=a.end()){ans=min(ans,solve(c[i],*it,*it1));}
			if(it!=b.begin() && it1!=a.end()){ans=min(ans,solve(c[i],*prev(it),*it1));}
			if(it!=b.end() && it1!=a.begin()){ans=min(ans,solve(c[i],*prev(it1),*it));}
			if(it!=b.begin() && it1!=a.begin()){ans=min(ans,solve(c[i],*prev(it),*prev(it1)));}
		}
		cout<<ans<<endl;
	}
	return 0;
}