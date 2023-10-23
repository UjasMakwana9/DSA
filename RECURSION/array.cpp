#include<bits/stdc++.h>

using namespace std;
void f(int a[],int i,int n)
{
    if(i>=n/2)
    {
        return;
    }
    
        swap(a[i],a[n-i-1]);
    
    f(a,i+1,n);

}
void two_pointer(int a[],int f,int r)
{
    if(f>=r) return ;

    swap(a[f],a[r]);
    two_pointer(a,f+1,r-1);
}
int main()
{
    int a[6]={1,2,3,4,5,6};
    int ar[5]={1,2,3,4,5};
    // two_pointer(a,0,5);
    // two_pointer(ar,0,4);
    f(a,0,6);
    f(ar,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    
    }
return 0;
}       