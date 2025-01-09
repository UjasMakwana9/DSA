#include<bits/stdc++.h>


using namespace std;
// Time Complexity is O(n)
// Space Complexity is O(1)
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int left = 0;
        int mover = 0;
        int n = arr.size();
        int sum = 0;
        
        while(mover<n)
        {
            sum+=arr[mover];
            while(sum>target)
                {
                    sum-=arr[left];
                    left++;
                }
            if(sum==target)
                return {left+1,mover+1};
                
            mover++;
        }
        return {-1};
    }
// Time Complexity is O(n^2)
// Space Complexity is O(1)
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        for(int i=0;i<arr.size();i++)
        {
            int sum = arr[i];
            if(sum==target)
                    return {i+1,i+1};
            for(int j = i+1;j<arr.size();j++)
            {
                sum+=arr[j];
                
                if(sum==target)
                    return {i+1,j+1};
                else if(sum>target)
                    break;
                    
            }
        }
        return {-1};
    }

int main()
{

return 0;
}