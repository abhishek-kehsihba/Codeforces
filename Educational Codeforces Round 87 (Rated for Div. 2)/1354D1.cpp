#include<bits/stdc++.h>
using namespace std;
#define ff      first
#define ss      second
#define ll      long long
#define ull     unsigned long long
#define mod     1000000007
#define vi      vector<ll>
#define pb      push_back
#define mp      make_pair
#define str     string
#define pr(a,n) for(int i=0;i<n;i++){cout<<a[i]<<" ";}
#define p(a)    cout<<a;
#define sp(x,y) fixed<<setprecision(y)<<x
#define w(x)    ll x; cin>>x; while(x--)
#define e       cout<<'\n';
#define all(v)  v.begin(), v.end()
#define test    cout<<"LOL_ABHISHEK"<<endl;
void kehsihba() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
const int N=(int)(1*1e6+10);
int fen[N];
void update(int i,int add){
	while(i<=N){
		fen[i]+=add;
		i=i+(i&(-i));
	}
}
int sum(int i){
	int ans=0;
	while(i>0){
		ans+=fen[i];
		i=i-(i&(-i));
	}
	return ans;
}
int find(int k){
	int cur=0,ans=0,prevsum=0;
	for(int i=19;i>=0;i--){
		if(fen[cur+(1<<i)]+prevsum<k && (cur+(1<<i))<N){
			cur=cur+(1<<i);
			prevsum+=fen[cur];
		}
	}
	return cur+1;
}
int32_t main() {
	kehsihba();
	ll n,m,x;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		update(x,1);
	}
	while(m--){
		cin>>x;
		if(x>0){
			update(x,1);
		}
		else{
			x=-1*x;
			int y=find(x);
			update(y,-1);
		}
	}
	int res=sum(N);
	if(res==0){cout<<0;}
	else{
		for(int i=1;i<=n;i++){
			if(sum(i)>0){
				cout<<i;
				break;
			}
		}
	}

}