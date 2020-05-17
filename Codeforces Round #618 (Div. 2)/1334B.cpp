#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define mod 1000000007
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define pb push_back
#define mp make_pair
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string 
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
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]>=x){
			cout<<n<<endl;continue;
		}
		else if(arr[n-1]<x){
			cout<<0<<endl;
		}
		else{
			ll sum=arr[n-1],ans=1;
			ll count=0;
			for(int i=n-2;i>=0;i--){
				sum+=arr[i];
				ll equal=sum/(ans+1);
				if(equal>=x){ans+=1;}
				else{break;}
			}
			cout<<ans<<endl;;
		}
	}
	return 0;
}