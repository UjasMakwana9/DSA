#include<bits/stdc++.h>


using namespace std;
// Brute Force Approach
// TC : O(n2)
// SC : O(1)
    char nonRepeatingChar(string &s) {
        // Your code here
        
        
        for(int i=0;i<s.size();i++)
        {
            bool flag = true;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    s[j]='0';
                    flag = false;
                }
            }
            if(flag)
                return s[i];
        }
        
        return '$';
        
    }
// Optimal Approach
// TC : O(n)
// SC : O(n)
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>mpp;
        
        for(auto &it : s)
        {
            mpp[it]++;
        }
        for(auto &it : s)
        {
            
            if(mpp[it]==1)
                return it;
        }
        return '$';
        
    }
int main()
{

return 0;
}