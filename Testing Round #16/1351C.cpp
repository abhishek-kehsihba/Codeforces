#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long 
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
	int t; cin>>t; 
	for(;t--;){
		string s; cin>>s;
		map<pair<float, float>, bool>mp;
		int x=0, y=0;
		long long ans=0;
		for(int i=0; i<s.size(); i++){
			int nx=x, ny=y;
			if(s[i]=='N') ny++;
			if(s[i]=='S') ny--;
			if(s[i]=='W') nx--;
			if(s[i]=='E') nx++;
			float mdx=(float)(nx+x)/2.0, mdy=(float)(ny+y)/2.0;
			if(mp[{mdx, mdy}]) ans++;
			else{
				mp[{mdx, mdy}]=1;
				ans+=5;
			}
			x=nx; y=ny;
		}
		cout<<ans<<endl;
	} 
	return 0;
}