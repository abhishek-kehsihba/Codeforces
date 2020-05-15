#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define ll long long
#define int long long
#define mod 1000000007
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
int32_t main(){
	kehsihba();
	ll arr[100001]={0};
	for(int i=1;i<100001;i++){
		arr[i]=(i*((3*i)+1))/2;
		//arr[i]+=arr[i-1];
	}
	w(t){
		ll n;
		cin>>n;
		ll ans=0;
		while(1){
			auto it=lower_bound(arr,arr+100001,n);
			if(*it==n){
                //cout<<*it<<" ";
				ans+=1;
                break;
			}
			else{
				it=prev(it);
				if(*it!=0){
                    //cout<<*it<<" ";
					n-=*it;
					ans+=1;
				}
				else{
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}