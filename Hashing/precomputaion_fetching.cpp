#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hsh[13]={0};
    for(int i=0;i<n;i++)
    {
        hsh[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--)
    {

        int value;
        cin>>value;
        cout<<hsh[value]<<" ";
    }


return 0;
}               