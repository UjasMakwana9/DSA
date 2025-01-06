#include<bits/stdc++.h>


using namespace std;
// Time Complexity: O(nlogn)
// Space Complexity: O(1)
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()==1)
            return {};
            
        sort(arr.begin(),arr.end());
        
        int left = 0;
        int right = arr.size()-1;
        int diff = INT_MAX;
        int indexl = 0;
        int indexr= 0;
        while(left<right)
        {
            int sum = arr[left]+arr[right];
            if(diff>abs(sum-target))
            {
                indexl = arr[left];
                indexr = arr[right];
                diff = abs(sum-target);
            }
            if(sum>target)
            {
                right--;    
            }
            else if(sum<target)
            {
                left++;
            }
            else if(sum==target)
            {
                return {arr[left],arr[right]};
            }
            
            
        }
        
        
        return {indexl,indexr};
    }

int main()
{

return 0;
}