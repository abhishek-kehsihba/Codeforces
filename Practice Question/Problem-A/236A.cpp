#include <iostream>
using namespace std;
#define ll long
int main(){
    ll ans=0;
    string a;
    cin>>a;
    int b[26]={0};
    for(int i=0;i<a.length();i++){
        b[a[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(b[i]>=1){
            ans+=1;
        }
    }
    a=(ans&1)?"IGNORE HIM!":"CHAT WITH HER!";
    cout<<a;
}
