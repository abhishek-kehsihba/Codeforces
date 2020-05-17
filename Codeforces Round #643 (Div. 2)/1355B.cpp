#include<bits/stdc++.h>
using namespace std;
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
int32_t main(){
	kehsihba();
	w(t){
		ll n;
		cin>>n;
		ll arr[n];
		ll count=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			count+=(arr[i]==1);
		}
		sort(arr,arr+n);
		if(count==n){cout<<n<<endl;}
		else{
			ll ans=0,count=0;
			for(int i=0;i<n;i++){
				count+=1;
				if(arr[i]==count){
					ans+=1;count=0;
				}
			}
			cout<<ans<<endl;
			
		}
	}
}