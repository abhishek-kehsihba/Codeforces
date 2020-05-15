#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
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
#define all(v) v.begin(),v.end()
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
		ll n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		ll x=n*(a+b);
		ll y=n*(a-b);
		ll m=(c-d);
		ll o=(c+d);
		bool z=false;
		//cout<<x<<" "<<y<<" "<<m<<" "<<o<<endl;
		for(int i=min(x,y);i<=max(x,y);i++){
			if(i>=m && i<=o){
				z=true;
				break;
			}
			if(i>o){break;}
		}
		if(z==true){cout<<"Yes"<<endl;}
		else{cout<<"No"<<endl;}
	}
}