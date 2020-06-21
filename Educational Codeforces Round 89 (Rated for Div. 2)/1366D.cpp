#include<bits/stdc++.h>
using namespace   std;
#define ff        first
#define ss        second
#define ll        long long
#define int       long long
#define inf       ((ll)1e18)
#define double    long double
#define ull       unsigned long long
#define mod       1000000007
#define vi        vector<ll>
#define ppi       pair<ll,pair<ll,ll>>
#define pb        push_back
#define mp        make_pair
#define str       string
#define pi        2*acos(0.0)
#define pr(a,x,n) for(int i=x;i<n;i++){cout<<a[i]<<" ";}
#define p(a)      cout<<a;
#define sp(x,y)   fixed<<setprecision(y)<<x
#define w(x)      ll x; cin>>x; while(x--)
#define all(v)    v.begin(), v.end()
#define test      cout<<"THIS_AND_THIS"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
void solve(){
	ll n;cin>>n;
	ll arr[n];
	ll a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];a[i]=-1;b[i]=-1;
		ll x=arr[i];
		for(int j=2;j*j<=x;j++){
			if(x%j==0){
				ll z=j+(x/j);
				if(__gcd(z,x)==1){
					a[i]=j;b[i]=x/j;
					break;
				}
			}
		}
	}
	pr(a,0,n);
	cout<<endl;
	pr(b,0,n);
}
int32_t main(){
	kehsihba();
	ll t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}



