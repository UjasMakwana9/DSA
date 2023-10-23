#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(string str,int i,int n)
{
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;

    return check_palindrome(str,i+1,n);
}
int main()
{
    string str="UJAU";
    if(check_palindrome(str,0,str.size())) cout<<"YES";
    else cout<<"NO";

return 0;
}       