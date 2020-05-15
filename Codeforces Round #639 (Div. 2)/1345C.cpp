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
	w(t){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		set<ll>s;
		bool check=true;
		for(int i=0;i<n;i++){
			s.insert((i+arr[i]+1000000000*n)%n);
		}
		check=((s.size()==n)?true:false);
		if(check){cout<<"YES\n";}
		else{cout<<"NO\n";}
	}
}