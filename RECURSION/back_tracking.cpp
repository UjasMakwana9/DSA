#include<bits/stdc++.h>

using namespace std;
void r(int i,int n)
{
    if(i>n)
        return ;
    r(i+1,n);
    cout<<i<<" ";
}
void f(int i,int n)
{
    if(i<1)
        return ;
    f(i-1,n);
    cout<<i<<" ";
}
int main()
{
    int n;
    cout<<"Enter value:";
    cin>>n;
    r(1,n);
    cout<<endl;
    f(n,n);
return 0;
}                