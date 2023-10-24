#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
void print(vector<int>& arr, int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int len=nums.size();
        int j=0;
        k=k%len;
        for(int i=0;i<abs(len-k);i++)
        {
            //1,2,3,4
            cout<<nums[i]<<" ";
            temp.push_back(nums[i]);
        }
            print(temp,temp.size());
        cout<<endl;
        for(int i=abs(len-k);i<len;i++)
        {
            //5,6,7

            cout<<nums[i]<<endl;
            nums[abs(i-abs(len-k))]=nums[i];
        }
         print(nums,nums.size());
        for(int i=k;i<len;i++)
        {
            nums[i]=temp[j];
            j++;
        }
    }
//     k=k%nums.size();
        // reverse(nums.begin(),nums.begin()+(nums.size()-k));

        // reverse(nums.begin()+(nums.size()-k),nums.end());   //MOST OPTIMSED
    
        // reverse(nums.begin(),nums.end());
};
int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    // v.push_back(1);
    // v.push_back(2);

    Solution s;
    s.rotate(v,10);
    cout<<"   %     "<<endl;
    s.print(v,7);
return 0;
}
