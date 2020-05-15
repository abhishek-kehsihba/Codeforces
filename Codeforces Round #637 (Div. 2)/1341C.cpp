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
	w(t) {
		ll n;
		cin>>n;
		vi arr(n+1),pos(n+1),c(n+1,-1);
		c[0]=0;
		arr[0]=0;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			pos[arr[i]]=i;
		}
		ll x=1;
		while(x<=n){
			ll m=pos[x];
			c[m]=x;
			x+=1;
			for(int i=m+1;i<n && c[i]==-1;i++){
				c[i]=x;
				x+=1;
			}
		}
		if(arr==c){cout<<"Yes"<<endl;}
		else{cout<<"No"<<endl;}
	}
}