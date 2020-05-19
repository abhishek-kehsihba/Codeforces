#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define int     ll
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int ans;
bool check(ll arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]!=0){return true;}
	}
	return false;
}
void dec(ll arr[],ll n){
	int i=0,j=0;
	while(arr[i]==0 && i!=n){i+=1;}
	if(i==n){return;}
	j=i+1;
	while(arr[j]!=0 && j!=n){j+=1;}j--;

	ll mn=INT_MAX;
	for(int k=i;k<=j;k++){
		mn=min(arr[k],mn);
	}
	if(mn!=1){ans+=(mn-1);}
	for(int k=i;k<=j;k++){
		arr[k]-=mn;
	}
}
int32_t main() {
	kehsihba();
	ans=0;
	ll n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	while(check(arr,n)){
		ans+=1;
		dec(arr,n);
	}
	cout<<ans;
}