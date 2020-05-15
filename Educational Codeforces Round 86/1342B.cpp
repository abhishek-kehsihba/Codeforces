#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
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
int32_t main() {
	kehsihba();
	w(t){
		str s;
		cin>>s;
		ll n=s.length();
		ll x=0,y=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){x+=1;}
			else{y+=1;}
		}
		if(x==n || y==n){
			cout<<s;
		}
		else{
			if(s[0]=='0'){
				for(int i=0;i<2*n;i++){
					cout<<((i%2==0)?'0':'1');
				}
			}
			else{
				for(int i=0;i<2*n;i++){
					cout<<((i%2==0)?'1':'0');
				}
			}
		}
		cout<<endl;
	}
}
