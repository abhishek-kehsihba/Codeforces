#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 1000000007
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
int32_t main(){
	kehsihba();
	ll n,k;
	w(t){
		cin>>n>>k;
		ll arr[n];
		set<int>s;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			s.insert(arr[i]);
		}
		if(s.size()>k){
			cout<<-1<<endl;
			continue;
		}
		cout<<n*k<<endl;
		for(int i=0;i<n;i++){
			for(auto j:s){
				cout<<j<<" ";
			}
			for(int j=0;j<(k-s.size());j++){
				cout<<1<<" ";
			}
		}
		cout<<endl;
	}
}
