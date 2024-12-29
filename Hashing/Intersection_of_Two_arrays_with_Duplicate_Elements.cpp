#include<bits/stdc++.h>


using namespace std;
// Optimal Solution
// Time Complexity : O(n)
// Space Complexity : O(n)
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>un;
        int n = a.size();
        int m = b.size();
        for(int i=0;i<n;i++)
        {
            un[a[i]]++;
        }
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            if(un[b[i]]>=1)
            {
                v.push_back(b[i]);
                un[b[i]]=-1;
            }
            
        }
        
        return v;
    }

int main()
{

return 0;
}