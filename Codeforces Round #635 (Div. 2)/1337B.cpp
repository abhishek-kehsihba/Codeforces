#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
#define ff first
#define ss second
#define ll long long
#define int long long
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
		ll x,n,m;
		cin>>x>>n>>m;
		ll cx=x,xn=n;
		while(x>0 && n>0){
			x=x/2;
			x+=10;
			n--;
		}
		x=x-(m*10);
		cx=cx-(m*10);
		while(cx>0 && xn>0){
			cx=cx/2;
			cx+=10;
			xn--;
		}
		if(x<=0 || cx<=0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}