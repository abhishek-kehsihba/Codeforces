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
int countDigit(long long n) { 
    return floor(log10(n) + 1); 
} 
int32_t main(){
	kehsihba();
	w(t){
		ll n,k;
		cin>>n>>k;
		if(n%2==1){
			if(k%2==0){cout<<"NO"<<endl;}
			else{
				if((n-(k-1))<=0){cout<<"NO"<<endl;}
				else{
					cout<<"YES"<<endl;
					for(int i=0;i<k-1;i++){cout<<1<<" ";
					}
					cout<<n-(k-1)<<endl;
				}
			}
		}
		else{
			if(k%2==0){
				if((n-(k-1))<=0){cout<<"NO"<<endl;}
				else{
					cout<<"YES"<<endl;
					for(int i=0;i<k-1;i++){cout<<1<<" ";
					}
					cout<<n-(k-1)<<endl;
				}
			}
			else{
				if((n-(2*(k-1)))<=0){cout<<"NO"<<endl;}
				else{
					cout<<"YES"<<endl;
					for(int i=0;i<k-1;i++){cout<<2<<" ";
					}
					cout<<n-(2*(k-1))<<endl;
				}
			}
		}
	}
}