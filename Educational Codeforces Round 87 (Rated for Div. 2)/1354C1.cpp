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
#define pi 3.14159265358979323846
int32_t main() {
	kehsihba();
	w(t) {
		ll n;
		cin>>n;n=n*2;
		if(n==4){
			cout<<sp(1,8)<<endl;
		}
		else{
			double angle=(double)180/n;
			angle=(double)angle*(pi/180);
			double ans=1/tan(angle);
			cout<<sp(ans,10)<<endl;

		}
	}
	return 0;
}