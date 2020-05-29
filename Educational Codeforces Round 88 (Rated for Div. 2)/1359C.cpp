#include<bits/stdc++.h>
using namespace   std;
#define ff        first
#define ss        second
#define ll        long long
#define int       long long
#define ull       unsigned long long
#define mod       1000000007
#define vi        vector<ll>
#define ppi       pair<ll,pair<ll,ll>>
#define pb        push_back
#define mp        make_pair
#define str       string
#define pi        2*acos(0.0)
#define pr(a,x,n) for(int i=x;i<n;i++){cout<<a[i]<<" ";}
#define p(a)      cout<<a;
#define sp(x,y)   fixed<<setprecision(y)<<x
#define w(x)      ll x; cin>>x; while(x--)
#define e         cout<<'\n';
#define all(v)    v.begin(), v.end()
#define test      cout<<"BECOME_EXPERT_FAST"<<endl;
void kehsihba(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
}
int32_t main() {
	kehsihba();
	ll tes;cin>>tes;
	while(tes--){
		ll h, c, t;
		cin >> h >> c >> t;
 
		if (t == h) {
			cout << "1" << "\n";
			continue;
		} else {
			if (2 * t <= (h + c)) {
				cout << "2" << "\n";
			} else {
 
				ll x = (t - c) / (2 * t - h - c);
				ll y = x + 1;
 
				long double try1 = ((x * h) + (x - 1) * c) / (1.0 * (2 * x - 1));
				long double try2 = ((y * h) + (y - 1) * c) / (1.0 * (2 * y - 1));
 
				long double diff1 = abs(try1 - t);
				long double diff2 = abs(try2 - t);
 
				if (diff1 <= diff2) {
					cout << 2 * x - 1 << "\n";
				} else {
					cout << 2 * y - 1 << "\n";
				}
			}
		}
	}
}
