#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string
#define all(v) v.begin(),v.end()
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
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll x=min(a,b),y=max(a,b),m=min(c,d),n=max(c,d);
		if(y==n){
			if(x+m==y){cout<<"Yes"<<endl;}
			else{
				cout<<"No"<<endl;
			}
		}
		else{
			cout<<"No"<<endl;
		}
	}
}