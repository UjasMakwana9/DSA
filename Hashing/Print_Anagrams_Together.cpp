#include<bits/stdc++.h>


using namespace std;
// Brute Force Solution
 bool anagram (string &str1,string &str2)
    {
        if(str1.size()!=str2.size())
            return false;
            
        unordered_map<int,int>um;
        
        for(int i=0;i<str1.size();i++)
        {
            um[str1[i]]++;
        }
        for(int i=0;i<str2.size();i++)
        {
            if(um[str2[i]]>0)
            {
                um[str2[i]]--;       
            }
            else
            {
                return false;
            }
        }    
        
    return true;
        
    }
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>v;
        // N times
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=="")
                continue;
                
            vector<string>temp;
            
            temp.push_back(arr[i]);
            // (N-1 + N-2 + N-3 + .... + 2 + 1)*10
            for(int j = i+1 ; j<arr.size();j++)
            {
                if(anagram(arr[i],arr[j]))
                {
                    temp.push_back(arr[j]);
                    arr[j]="";
                }
            }
            v.push_back(temp);
        }
        return v;
    }

// Optimal Solution
//   Time Complexity = O(n * k log k)
//   Space complexity = O(n * n)
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        int n = arr.size();
        // n * n
        unordered_map<string,vector<string>>mpp;
        
        // N times O(n)
        for(int i=0;i<arr.size();i++)
        {
            string str = arr[i];
            // k * log k
            sort(str.begin(),str.end());
            
            mpp[str].push_back(arr[i]);
        }
        
        
        vector<vector<string>>v;
        // No. of groups In worst case O(n)
        for(auto &itr : mpp)
        {
            v.push_back(itr.second);
        }
        return v;
        
        
        
    }

int main()
{

return 0;
}