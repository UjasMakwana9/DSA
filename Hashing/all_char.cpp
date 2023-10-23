// ASCII VALUE STARTS FROM 0 to 256

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int hsh[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hsh[s[i]]+=1;
    }
    // cout<<s.size();

int q;
    cin>>q;

    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<hsh[ch]<<" ";
    }

return 0;
}           