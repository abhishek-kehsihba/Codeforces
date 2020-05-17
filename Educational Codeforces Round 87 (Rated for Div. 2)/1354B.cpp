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
int32_t main() {
	kehsihba();
	w(t) {
		str s;
		cin>>s;
		int n=s.length();
		int m=0,x=0,y=0;;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){m=1;}
			if(s[i]=='2'){x=1;}
			if(s[i]=='3'){y=1;}
		}
		if(m+x+y!=3){cout<<0<<endl;}
		else{
			map<char,ll>m;
			ll ans=INT_MAX;
			ll cnt=0;
			for(int i=0,j=0;i<n;i++){
				m[s[i]]+=1;
				if(m[s[i]]==1){cnt+=1;}
				while(j<=i and m[s[j]]>1){
					m[s[j]]-=1;
					j+=1;
				}
				if(cnt==3){ans=min(ans,i-j+1);}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}