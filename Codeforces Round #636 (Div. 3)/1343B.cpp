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
		ll x=n/2;
		if(x%2==1){cout<<"NO\n";}
		else{
			cout<<"YES\n";
			ll sum=0;
			for(int i=2;i<=n;i+=2){
				cout<<i<<" ";
				sum+=i;
			}
			ll sum1=0;
			for(int i=1;i<n-1;i+=2){
				cout<<i<<" ";
				sum1+=i;
			}
			cout<<sum-sum1;
			cout<<endl;
		}
	}
	return 0;
}