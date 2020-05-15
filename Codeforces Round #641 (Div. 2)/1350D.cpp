#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
#define int long long
#define ull unsigned long long 
#define mod 1000000
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define str string
#define p(a,n) for(int i=1;i<n;i++){cout<<a[i]<<" ";}
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
#define all(v) v.begin(), v.end()
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		ll arr[n+4];
		arr[n+1]=arr[n+2]=arr[n+3]=-1;
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		if(n==1 && arr[1]==k){cout<<"yes"<<endl;}
		else{
			bool a=0,b=0;
			for(int i=1;i<=n;i++){
				if(arr[i]==k){a=1;}
				if(arr[i]>=k && (arr[i+1]>=k or arr[i+2]>=k)){
					//cout<<endl<<i<<endl;
					b=1;
				}
			}
			if(a ==1 and b==1){cout<<"yes"<<endl;}
			else{cout<<"no"<<endl;}
		}
	}
}