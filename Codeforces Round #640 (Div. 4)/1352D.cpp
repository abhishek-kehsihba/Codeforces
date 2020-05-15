#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long int
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
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
		ll n;cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll a=0,b=0;
		ll ans=0;
		ll x,y=0;
		int i=0,j=n-1;
		while(i<=j){
			if(ans%2==0){
				ll d=0;
				while(i<=j && d<=y){
					d+=arr[i++];
				} 
				a+=d;
				x=d;
			}
			else{
				ll d=0;
				while(i<=j && d<=x){
					d+=arr[j--];
				} 
				b+=d;
				y=d;
			}
			ans+=1;
		}
		cout<<ans<<" "<<a<<" "<<b<<endl;
	}
}