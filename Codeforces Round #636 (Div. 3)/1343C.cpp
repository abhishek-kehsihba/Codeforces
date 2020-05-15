#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
#define ll long long
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
	w(t){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			ll t=arr[i];
			ll s=1;
			if(arr[i]<0){s=-1;}
			while(s*arr[i]>0){
				if(arr[i]>t){t=arr[i];}
				i+=1;
				if(i>=n){break;}
			}
			ans+=t;
			if(i>=n){break;}
			s=s*(-1);
			i-=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}