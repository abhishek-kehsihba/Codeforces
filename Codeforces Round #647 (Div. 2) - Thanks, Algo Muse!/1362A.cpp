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
int32_t main(){
	kehsihba();
	w(t){
		ll a,b;cin>>a>>b;
		if(a==b){
			cout<<0<<endl;
		}
		else{
			if(a%b!=0 and b%a!=0){
				cout<<-1<<endl;continue;
			}
			if(a>b){swap(a,b);}
			ll x=b/a;
			ll ans=0;
			while(1){
				if(x>=8 and x%8==0){
					x=x/8;ans+=1;
				}
				else if(x>=4 and x%4==0){
					x=x/4;ans+=1;
				}
				else if(x>=2 and x%2==0){
					x=x/2;ans+=1;
				}
				else{
					break;
				}
			}
			if(x==1){cout<<ans<<endl;}
			else{cout<<-1<<endl;}
		}
	}
}
