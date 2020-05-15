#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long int
#define mod 1000000007
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define str string
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
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
		ll n;
		cin>>n;
		if(n==2 || n==3){
			cout<<-1<<endl;
		}
		else{
			if(n%2==0){
				for(int i=n-1;i>=1;i-=2){
					cout<<i<<" ";
				}
				cout<<"4 2 ";
				for(int i=6;i<=n;i+=2){
					cout<<i<<" ";
				}
				cout<<endl;
			}
			else{
				for(int i=n;i>=1;i-=2){
					cout<<i<<" ";
				}
				cout<<"4 2 ";
				for(int i=6;i<=n;i+=2){
					cout<<i<<" ";
				}
				cout<<endl;
			}
		}
	}
}