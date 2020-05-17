#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, null_type, less< pair<int,int> >, rb_tree_tag, tree_order_statistics_node_update>
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
#define pi 3.14159265358979323846
int32_t main() {
	kehsihba();
	ll n,q;
	cin>>n>>q;
	ll arr[n];
	ordered_set set;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		set.insert({arr[i],i});
	}
	for(int i=0;i<q;i++){
		ll x;
		cin>>x;
		if(x<0){
			auto it=set.find_by_order(abs(x)-1);
			set.erase(it);
		}
		else{
			set.insert({x,i+n});
		}
	}
	if(set.size()==0){
		cout<<"0"<<endl;
	}
	else{
		auto x=set.begin();
		cout<<x->first;
	}
	return 0;
}