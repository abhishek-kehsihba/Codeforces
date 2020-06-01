#include<bits/stdc++.h>
using namespace   std;
#define ff        first
#define ss        second
#define ll        long long
#define int       long long
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
#define endl      '\n'
#define all(v)    v.begin(), v.end()
#define test      cout<<"BECOME_EXPERT_FAST_LOL"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
int32_t main(){
	kehsihba();
  	w(t){
  		ll n,k;cin>>n>>k;ll arr[n];
  		ll odd=0,even=0;
  		for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]&1){odd++;}}
  		even=n-odd;
  		
  		for(int i=0;i<=even;i++){
  			for(int j=0;j<=odd;j++){
  				if(i+j==k && j%2!=0){
  					cout<<"Yes";goto fuck;break;
  				}
  			}
  		}
  		cout<<"No";
  		fuck:cout<<endl;
  	}
}
