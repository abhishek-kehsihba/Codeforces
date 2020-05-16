#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 1000000007
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
void kehsihba(){
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
int32_t main() {
	kehsihba();
	w(t){
		ll n;
		cin>>n;
		ll arr[n];
		map<ll,ll>m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]]+=1;
		}
		ll mx=0;
		ll index=0;
		for(int i=0;i<n;i++){
			mx=max(mx,m[arr[i]]);
		}
		int size=m.size(),ans=0;
		if(size<mx){
			ans=size;
		}
		else if(size==mx){
			ans=size-1;
		}
		else{
			ans=mx;
		}
		cout<<ans<<endl;
	}
	return 0;
}