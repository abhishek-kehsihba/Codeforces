#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define ppi     pair<ll,pair<ll,ll>>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pi      2*acos(0.0)
#define pr(a,x,n) for(int i=x;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"BECOME_EXPERT_FAST"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
}
int32_t main() {
	kehsihba();
	ll n,k;
	cin>>n>>k;
	ll arr[2*n+1],p[2*n+1],c[2*n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		arr[n+i]=arr[i];
	}
	p[0]=c[0]=arr[0]=0;
	for(int i=1;i<=2*n;i++){
		p[i]=p[i-1]+((arr[i])*(arr[i]+1))/2;
		c[i]=c[i-1]+arr[i];
	}
	ll ans=-1;
	for(int i=2*n;i>=n+1;i--){
		ll low=1,high=i;
		ll temp=i;
		while(low<=high){
			ll mid=low+(high-low)/2;
			if(c[i]-c[mid]<k){
				temp=mid;
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		ll x=c[i]-c[temp-1]-k;
		ll sum=p[i]-p[temp-1];
		sum-=(x*(x+1))/2;
		ans=max(ans,sum);
	}
	cout<<ans;
}


















