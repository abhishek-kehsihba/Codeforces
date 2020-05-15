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
		ll n0,n1,n2;
		cin>>n0>>n1>>n2;
		string ans;
 
    if(n0>0) {
        ans+="0";
        for(int i=0; i<n0; i++)
            ans+="0";
    }
 
    if(n2>0) {
        if(n0>0)
            n1--;
 
        ans+="1";
 
        for(int i=0; i<n2; i++)
            ans+="1";
    }
 
    if(n1>0) {
        if(ans.size()==0)
            ans+="1";
 
        char c='0';
        if(ans.back()=='0')
            c='1';
 
        for(int i=0; i<n1; i++) {
            ans+=c;
            if(c=='1')
                c='0';
            else
                c='1';
        }
    }
 
    cout<<ans<<endl;
	}
}