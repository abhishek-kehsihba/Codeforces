#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define bit(x, i) (x >> (i - 1) & 1ll)
const int N = 1e5 + 5;
int n, a[N], dd[N];
vector<int> it[N], ans;
int main(){
   	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for(int i=1; i<=n;i++) {
		for(int j=1;j<=32;j++)
            if(bit(a[i], j)) 
                it[j].push_back(i); 
	}

	for(int i=32; i>=1;i--) {

		if(it[i].size() == 1 && dd[it[i][0]] == 0) 
			ans.push_back(a[it[i][0]]),
			dd[it[i][0]] = 1; 

	}
	for(int i=1;i<=n;i++)
	   if(!dd[i]) 
	         ans.push_back(a[i]);
	for(auto &v:ans) 
		cout << v << ' ';
}