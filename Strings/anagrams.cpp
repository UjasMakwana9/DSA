// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/anagram-1587115620
// Easy -->No concept learn
#include<bits/stdc++.h>

using namespace std;
// Brute Force 
// O(n^2)
bool areAnagrams(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size())
          return false;
          
        for(int i=0;i<s1.size();i++)
        {
            bool flag = true;
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    flag = false;
                    s2[j]='0';
                    break;
                }
            }
            if(flag)
                return false;
        }
        return true;
    }
// TC : O(n)
// SC : O(n)
bool areAnagrams_hash(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size())
          return false;
          
        int hsh[26] = {0};
        
        for(int i=0; i<s1.size(); i++)
        {
            hsh[s1[i]-97]++;
        }
        
        for(int i=0;i<s2.size();i++)
        {
            hsh[s2[i]-97]--;
        }
        
        for(int i=0; i<26;i++)
        {
            
            if(hsh[i]!=0)
                return false;
        }
        return true;
    }
// TC : O(n)
// SC : <O(n)
bool areAnagrams_mostoptimal(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size())
          return false;
          
        unordered_map<char,int>mpp;
        
        for(int i=0; i<s1.size(); i++)
        {
            mpp[s1[i]]++;
        }
        
        for(int i=0;i<s2.size();i++)
        {
            mpp[s2[i]]--;
        }
        
        for(auto &it : mpp)
        {
            if(it.second!=0)
                return false;
        }
        return true;
    }
int main()
{
    cout << int('a' - 97);
return 0;
}