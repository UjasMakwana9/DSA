// Print in forward order
// Print in Reverse order

#include<bits/stdc++.h>

using namespace std;
void f(int i,int n)
{
    if(i>n)
        return;
    cout<<i<<" ";
    f(++i,n);
}
void r(int i,int n)
{
    if(i<1)
        return;
    cout<<i<<" ";
    --i;
    r(i,n);
}
int main()
{
    int n;
    cout<<"Enter value:";
    cin>>n;
    f(1,n);
    cout<<endl;
    r(n,n);
return 0;
}