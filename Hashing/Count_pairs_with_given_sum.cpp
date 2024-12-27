#include<bits/stdc++.h>


using namespace std;
// Time Complexity : O(n^2)
// Space Complexity : O(1)
    int countPairs(vector<int> &arr, int target) {
        // Code here
        // unordered_map<int,int>mpp;
        int count = 0;
        for(int i=0;i<arr.size();i++)
        {
            int diff = target - arr[i];
            for(int j = i+1;j<arr.size();j++)
            {
                if(arr[j]==diff)
                {
                    count++;
                }
            }
        }
        return count;
    }
// Time Complexity : O(n)
// Space complexity : O(1)
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>mpp;
        int count = 0;
        // n
        for(int i=0;i<arr.size();i++)
        {
            
            int diff = target - arr[i];
            // most case O(1) , rare case O(n) ===> O(1)
            auto itr = mpp.find(diff);
            
            if(itr!=mpp.end())
            {
                count+=itr->second;
            }
            
            mpp[arr[i]]++;
        }
        return count;
    }
int main()
{

return 0;
}