#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p push
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   	#endif
   	int n,i;

    cin>>n;
    if (n & 1)
        cout<<-1<<endl;
    else
    {
        for (i=n; i>=1; i--)
        {
            cout<<i;

            if (i == 1)
                cout<<endl;
            else
            	cout<<" ";  
        }
    }

}
