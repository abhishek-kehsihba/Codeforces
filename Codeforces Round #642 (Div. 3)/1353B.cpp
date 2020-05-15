#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
#define int long long
#define ull unsigned long long 
#define mod 1000000
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
ll sum(int arr[],int n){
	ll ans=0;
	for(int i=0;i<n;i++){
		ans+=arr[i];
	}
	return ans;
}
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		ll a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);
		ll x=0;
		for(int i=0;i<n;i++){
			
			if(x==k){break;}
			if(a[i]<b[i]){swap(a[i],b[i]);x+=1;}
		}
		cout<<sum(a,n)<<endl;
	}
}