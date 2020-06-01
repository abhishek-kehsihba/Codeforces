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
  		str s;cin>>s;
  		ll a=0,b=0;
  		int n=s.length();
  		for(int i=0;i<n;i++){
  			if(s[i]=='1'){a+=1;}
  			else{b+=1;}
  		}
  		ll ans=min(a,b);
  		for(int i=-1;i<n;i++){
  			ll temp=0;
  			for(int j=0;j<n;j++){
  				if(j>=i and s[j]=='0'){temp+=1;}
  				if(j<i and s[j]=='1'){temp+=1;}
  			}
  			ans=min(ans,temp);
  		}
  		for(int i=-1;i<n;i++){
  			ll temp=0;
  			for(int j=0;j<n;j++){
  				if(j>=i and s[j]=='1'){temp+=1;}
  				if(j<i and s[j]=='0'){temp+=1;}
  			}
  			ans=min(ans,temp);
  		}
  		cout<<ans<<endl;
  	}
}
