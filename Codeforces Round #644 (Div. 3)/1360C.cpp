#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define int     long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define ppi     pair<ll,pair<ll,ll>>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pi      2*acos(0.0)
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
}
int32_t main() {
	kehsihba();
	w(t){
		ll n;cin>>n;
		ll arr[n];
		ll even=0,odd=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0){even+=1;}
			else{odd+=1;}
		}
		sort(arr,arr+n);
		if(even%2==0 && odd%2==0){cout<<"YES";e}
		else{
			bool a=false;
			for(int i=0;i<n-1;i++){
				if(arr[i]+1==arr[i+1]){
					even-=1;odd-=1;
					i+=1;
				}
				if(even%2==0 && odd%2==0){
					cout<<"YES";e
					a=true;break;
				}
			}
			if(!a){cout<<"NO";e}
		}
		
	}
}
