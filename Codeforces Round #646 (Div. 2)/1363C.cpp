#include<bits/stdc++.h>
using namespace   std;
#define ff        first
#define ss        second
#define ll        int
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
#define test      cout<<"BECOME_EXPERT_FAST_LOL"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
int32_t main(){
	kehsihba();
  	w(t){
  		ll n,x;
  		cin>>n>>x;
  		if(n==1){cout<<"Ayush"<<endl;continue;}
  		ll arr[n+1]={0};
  		for(int i=1;i<n;i++){
  			ll a,b;cin>>a>>b;
  			arr[a]++;arr[b]++;
  		}
  		if(arr[x]==1){cout<<"Ayush"<<endl;}
  		else{
  			if(n&1){cout<<"Ashish"<<endl;}
  			else{cout<<"Ayush"<<endl;}
  		}
  	}
}

