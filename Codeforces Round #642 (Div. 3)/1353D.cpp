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
int32_t main(){
	kehsihba();
	w(t){
		ll n,x=1;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
		}
		else{
			ll ans[n]={0};
			priority_queue<pair<ll,pair<ll,ll>>>q;
			q.push({n,{0,n-1}});
			while(!q.empty()){
				pair<ll,pair<ll,ll> > y=q.top();q.pop();
				ll a=-y.ss.ff,b=y.ss.ss;ll val=(a+b)/2;ans[val]=(x++);
				if(a<=(val-1)){q.push({val-a,{-a,val-1}});}
				if((val+1)<=b){q.push({b-val,{-(val+1),b}});}
				
			}
			p(ans,n)cout<<endl;
		}
	}
}