#include<bits/stdc++.h>


using namespace std;
// Time Complexity is O(n^2)
// Space Complexity is O(1)
    int maxWater(vector<int> &arr) {
        // code here
        int maxi = 0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int mini = min(arr[i],arr[j]);
                int value = mini * (j-i);
                
                maxi = max(maxi,value);
                
            }
        }
        return maxi;
    }
// Time Complexity is O(n)
// Space Complexity is O(1)
// Two Pointer Approach
        int maxWater(vector<int> &arr) {
        // code here
        int maxi = 0;
        int low = 0;
        int high = arr.size()-1;
        
        while(low<high)
        {
            int value = (high - low)*min(arr[low],arr[high]);
            maxi = max(maxi,value);
            
            if(min(arr[low],arr[high])==arr[low])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return maxi;
    }
int main()
{

return 0;
}