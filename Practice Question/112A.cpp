#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1[101],ch2[101];
    cin>>ch1>>ch2;
    int l=strlen(ch1),flag=0;
    for(int i=0;i<l;i++)
    {
        if(toupper(ch1[i])<toupper(ch2[i])){cout<<-1;flag=1;break;}
        else if(toupper(ch1[i])>toupper(ch2[i])){cout<<1;flag=1;break;}
    }

    if(flag==0){cout<<0;}
}
