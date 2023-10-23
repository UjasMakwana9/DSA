
#include<bits/stdc++.h>

using namespace std;
long long check(int n)
{
    if(n==0)
        return 1;
    return n*check(n-1);
}
void p(int n,long long fact)
{
    if(n==0)
    {

        cout<<fact;
        return ;
    }
    p(n-1,fact*n);
}

int main()
{
    cout<<check(10)<<endl;
    p(10,1);
return 0;
}