/*This is coded by Abhishek*/
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a;
    cin>>t;
    while(t--){
    	cin>>a;
    	ll ans1=0,ans2=0,c=0;
    	ll x,y,z;
    	map<ll,ll>m;
    	for(int i=2;i<sqrt(a)+1;i++){
    		if(a%i==0){
    			m[i]++;
    			c+=1;
    			x=i;
    			ans1=a/i;
    			break;
    		}
    	}
    	if(c==0){
    		cout<<"NO"<<endl;
    		continue;
    	}

    	for(int i=2;i<sqrt(ans1)+1;i++){
    		if(ans1%i==0){
    			if(m[ans1/i]>0 || m[i]>0 || ans1/i==i ){
    			continue;
    			}
    			else{
    				ans2=i;
    				c+=1;
    				break;
    			}
    		}
    		
    	}
    	if(c==2){
    		cout<<"YES"<<endl;
    		cout<<x<<" "<<ans2<<" "<<a/(x*ans2)<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }


}