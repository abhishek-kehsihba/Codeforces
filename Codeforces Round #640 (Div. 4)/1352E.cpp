#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long int
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
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
		ll n;cin>>n;
		ll arr[n];
		ll m[n+1]={0};
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			int ans=arr[i]+arr[i+1];
			if(ans<=n){
				m[ans]+=1;
				for(int j=i+2;j<n;j++){
					ans+=arr[j];
					if(ans<=n){
						m[ans]+=1;
					}
					else{
						break;
					}
				}
			}
		}
		ll res=0;
		for(int i=0;i<n;i++){
			if(m[arr[i]]>0){
				res+=1;
			}
		}
		cout<<res<<endl;
	}
}