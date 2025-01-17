#include<bits/stdc++.h>


using namespace std;
// Time Complexity: O(N)
// Space Complexity: O(N)
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int zero = 0;
        int product = 1;
        int index = -1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                zero++;
                index = i;
            }
            else
            {
                product*= arr[i];
            }
        }
        
        vector<int>v(arr.size(),0);
        if(zero==1)
        {
            v[index]=product;
            return v;
        }
        else if(zero > 1)
        {
            return v;
        }
        else
        {
            for(int i=0;i<arr.size();i++)
            {
                v[i]=(product/arr[i]);
            }
        }
        return v;
    }
int main()
{

return 0;
}