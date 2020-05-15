#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	int n, l, r, ls[2], rs[2];
    ls[0] = ls[1] = rs[0] = rs[1] = 0;
    scanf("%d", &n);
    for(int i=0;i< n;i++) {
        scanf("%d %d", &l, &r);
        ls[l]++;
        rs[r]++;
    }
    printf("%d", min(ls[0], ls[1]) + min(rs[0], rs[1]));
}
