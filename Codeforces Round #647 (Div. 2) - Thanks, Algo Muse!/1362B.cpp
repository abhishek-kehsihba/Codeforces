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
#define endl      '\n'
#define all(v)    v.begin(), v.end()
#define test      cout<<"THIS_AND_THIS"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
bool solve(int arr[],int n,int k){
	map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]+=1;
	}
	for(int i=0;i<n;i++){
		ll x=arr[i]^k;
		if(m[x]>0){
			m[x]-=1;
		}
		else{
			return false;
		}
	}
	for(int i=0;i<n;i++){
		if(m[arr[i]]!=0){
			return false;
		}
	}
	return true;
}
int32_t main(){
	kehsihba();
	w(t){
		ll n;cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll ans=-1;
		for(int k=1;k<=1024;k++){
			bool check=solve(arr,n,k);
			if(check){
				ans=k;
				break;
			}
		}
		cout<<ans<<endl;
	}
}
