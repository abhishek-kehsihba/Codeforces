#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define int     long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define ppi     pair<ll,pair<ll,ll>>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pi      2*acos(0.0)
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
}
int32_t main() {
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		if(n<=k){cout<<1<<endl;continue;}
		if(k==1){cout<<n<<endl;continue;}
		ll ans=INT_MAX;
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				if((n/i)<=k){
					ans=min(ans,i);
				}
				if(i<=k){
					ans=min(ans,n/i);
				}
			}
		}
		if(ans==INT_MAX){cout<<n<<endl;continue;}
		cout<<ans<<endl;
		
	}
}
