#include<bits/stdc++.h>

using namespace std;
int cnt=0;
void f(int i,int n)
{
    if(i>n)
        return;
    
    cout<<"RAM ";
    i++;
    cnt++;
    f(i,n);
}
int main()
{
    f(1,10);
    cout<<cnt;
return 0;
}