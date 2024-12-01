// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/non-repeating-character-1587115620
// Easy -->No concept learn
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
// TC : O(2n) ==> O(n)
// SC : O(26)
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
// Most Optimal App.
// TC : O(n)
// SC : O(26)
        char nonRepeatingChar(string &s) {
        // Your code here
        vector<int>v(26,-1);
        int counter = 1;
        for(int i=0;i<s.size();i++)
        {                  
            if(v[s[i]-97]==-1)
            {
                v[s[i]-97]=counter;
                counter++;
            }
            else if(v[s[i]-97]!=-1)
            {
                v[s[i]-97]=-2;
            }
        }
        
        int mini = INT_MAX;
        char index = '$';
        for(int i=0;i<26;i++)
        {
            if(v[i]>0 && v[i]<mini)
            {
                mini = v[i];
                index = char(i+97);
            }
            // cout<<v[i]<<" ";
        }
        
        return index;
    }
int main()
{

return 0;
}