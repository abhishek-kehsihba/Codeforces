#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<ll>
#define vs vector<string>
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
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		str s;
		cin>>s;
		vs a(k);
		vs b(k);
		for(int i=0;i<k;i++){
			a[i]="",b[i]="";
		}
		sort(all(s));
		if(k==1){
			cout<<s<<endl;continue;
		}
		if(k==n){
			cout<<s[n-1]<<endl;continue;
		}
		for(int i=0;i<k;i++){
			a[i]+=s[i],b[i]+=s[i];
		}
		for(int i=k;i<n;i++){
			a[0]+=s[i];
			b[i%k]+=s[i];
		}
		sort(all(a));
		sort(all(b));
		cout<<min(a[k-1],b[k-1])<<endl;
	}
}
