#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 	#endif
 	ll a;
 	double x=0;
 	cin>>a;
 	for(int i=0;i<a;i++){
 		double y;
 		cin>>y;
 		x+=y;
 	}
 	x=x/100;
 	cout<<setprecision(10)<<(x/a)*100;
	return 0;
}
