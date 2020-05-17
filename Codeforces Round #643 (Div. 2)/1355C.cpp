#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
#define int long long 
#define ull unsigned long long 
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define str string
#define p(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define all(v) v.begin(), v.end()
#define test cout<<"LOL_ABHISHEK"<<endl;
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
ll sum(ll n){
	return ((n==0)?0:(n*(n+1))/2);
}
int32_t main(){
	kehsihba();
	ll a,b,c,d;
	ll res=0;
	cin>>a>>b>>c>>d;
	ll cnt=0,left=b,ans=0;
	for(int i=c;i<d+1;i++){
		while((i+1-left)>b and left<=c){left+=1;}

		if(left>c){break;}
		ll num=i-left+1;
		if(num<=a){num=a;}
		ll mid=c-left;
		cnt=num-a;
		if(left+cnt<=c){
			ll l=b-num+1;
			ll r=l+cnt;
			ans+=sum(r)-sum(l-1);
			ll rem=mid-cnt;
			ll cc=(b-a+1);
			ans+=(cc*rem);
		}
		else{
			ll l=b-num+1;
			ll r=l+mid;
			ans+=sum(r)-sum(l-1);
		}
	}
	cout<<ans;
	return 0;
}