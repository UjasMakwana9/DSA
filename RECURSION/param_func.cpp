// sum of n numbers

#include<bits/stdc++.h>

using namespace std;
int f(int n)
{
    if(n==0)
        return 0;
    return n+f(n-1);
}

void p(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return ;
    }
    p(i-1,sum+i);
}
int main()
{
    cout<<f(200);
    p(200,0);
return 0;
}   