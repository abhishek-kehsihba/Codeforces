#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	int x,y;
   	int arr[5][5];
   	for(int i=0;i<5;i++){
   		for(int j=0;j<5;j++){
   			cin>>arr[i][j];
   			if(arr[i][j]==1){
   				x=i;y=j;
   			}
   		}
   	}
   	cout<<abs(x-2)+abs(y-2);
}
