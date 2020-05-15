#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
#define ll long long
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define pb push_back
#define mp make_pair
#define sp(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) ll x; cin>>x; while(x--)
#define endl '\n'
#define str string
#define all(v) v.rbegin(),v.rend()
int32_t main() {
    w(t){
        ll n;
        cin>>n;
        ll ans=0;
        for(int i=2;i<=30;i++){
            ll x=pow(2,i)-1;
            ll y=n/x;
            if(y*x==n){cout<<y<<endl;break;}
        }
    }
	return 0;
}