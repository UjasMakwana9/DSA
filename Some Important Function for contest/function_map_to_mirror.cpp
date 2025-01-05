#include<bits/stdc++.h>


using namespace std;

bool check(char a , char b)
{
        unordered_map<char,char>um;
        char temp = 'z';
        for(char i = 'a' ; i<='z' ; i++ )
            {
                um[i]=temp;
                cout<< um[i] << " ";
                temp--;
            }

}

int main()
{

return 0;
}