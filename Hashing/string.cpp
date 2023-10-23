// For Lower Case Letter Only

#include<bits/stdc++.h>
// 
using namespace std;
// 
int main()
{
    string s;
    cin>>s;
// 
    int hsh[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hsh[s[i]-int('a')]+=1;
    }
// 
// 
    int q;
    cin>>q;
    while(q--)
    {
// 
        char value;
        cin>>value;
        int a=value;
        cout<<hsh[a-97]<<" ";
    }
// 
// 
return 0;
}               