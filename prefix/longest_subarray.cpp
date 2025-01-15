#include<bits/stdc++.h>


using namespace std;
// Better Approach
// Time complexity : O(n^2)
// Space complexity : O(1)
    int longestSubarrayBruteForce(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum==k)
                {
                    if(maxi<(j-i+1))
                    {
                        maxi = j-i+1;
                    }
                }
            }
        }
        return maxi;
    }


// Most optimal solution
// Time complexity : O(n log n )
// Space complexity : O(n)
// For Positive number and zeros and negative numbers only
        int longestSubarrayOptimal(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        map<int,int>mpp;
        int maxi = 0;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum == k)
            {
                if(maxi<i+1)
                {
                    maxi = i+1; 
                }
            }
            int rem = sum - k;
            
            if(mpp.find(rem)!=mpp.end())
            {
                int len = i - mpp[rem];
                if(maxi < len)
                {
                    maxi = len;
                }
            }
            
            if(mpp.find(sum)==mpp.end())
            {
              mpp[sum] = i;
                
            }
        }
        return maxi;
    }

// Most optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// For Positive number and zeros only
        int longestSubarray(vector<int>& arr, int k) {
            int left = 0, right = 0, sum = 0, maxi = 0;

            while(right < arr.size()) {
                sum += arr[right];
                while(sum > k && left <= right) {
                    sum -= arr[left];
                    left++;
                }
                if(sum == k) {
                    maxi = max(maxi, right - left + 1);
                }
                right++;
            }
            return maxi;
        }
int main()
{
    vector<int>arr = {1,2,3,1,1,1,1};
    int k = 3;
    cout<<longestSubarray(arr,k)<<endl;
return 0;
}