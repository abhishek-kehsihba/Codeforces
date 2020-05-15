#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
#define ll long long
#define int long long
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string
#define all(v) v.rbegin(),v.rend()
void kehsihba(){
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
int32_t main() {
	kehsihba();
	int t; cin >> t;
    while(t --) {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];
        }
        ll pre[2*k+10]={0};
        std::vector<pair<ll,ll> > v;
        for(int i=0;i<n/2;i++){
        	v.pb(mp(min(arr[i],arr[n-i-1]),max(arr[i],arr[n-i-1])));
        }
        map<ll,ll>m;
        for(auto it:v){
        	int l=it.ff+1;
        	int r=it.ss+k;
        	m[it.ff+it.ss]+=1;
        	pre[l]+=1;
        	pre[r+1]-=1;
        }
        for(int i=1;i<=(2*k+10);i++){
        	pre[i]+=pre[i-1];
        }
        ll ans=n;
        for(int i=2;i<=(2*k);i++){
        	int c2=m[i];
        	int c1=pre[i]-m[i];
        	int c3=(n/2)-c1-c2;
        	ll t=(c3*2)+c1;
        	ans=min(ans,t);
        }
        cout<<ans<<endl;
    }
	return 0;
}