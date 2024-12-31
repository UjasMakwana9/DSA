#include<bits/stdc++.h>


using namespace std;
// refer the take u forward docs is very use full also the time complexity is O(n^2) when there is inner loop 
// i.e.  linear search in the while loop
// This is brute force solution

    int longestConsecutive(vector<int>& arr) {
        // Your code here
        // Brute force solution 
        int val = 1e5+2;
        // space c : O(10^5)
        int hsh[val] = {0};
        int n = arr.size();
        
        // time c : O(n)
        for(int i=0;i<n;i++)
        {
            hsh[arr[i]]++;
        }
        int maxi = 0;
        int count = 0;
        
        // time c : O(10^5)
        for(int i=0;i<val;i++)
        {
            if(hsh[i]==0){
                maxi = max(count,maxi);
                count = 0;
            }
            else{
                count++;
            }
        }
        return maxi;
    }

// This is the better approach
    int longestConsecutive2(vector<int>& arr) {
        // Your code here
        // Not a better approach 
        // just space is optimise to O(n)
        // but is increased to O(n log n)
        map<int,int>mpp;
        
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        int maxi = 0;
        int elem = INT_MIN;
        int count = 0;
        for(auto itr : mpp)
        {
            if(elem+1 == itr.first)
            {
                count++;
            }
            else
            {
                maxi = max(maxi,count);
                count = 1;
            }
            elem = itr.first;
        }
        maxi = max(maxi,count);
        return maxi;
    }
// optimal solution
    int longestConsecutive3(vector<int>& arr) {
        // Your code here
        // Optimal Solution
        //  space complexity to O(n)
        //time complexity O(n)
        unordered_set<int>us(arr.begin(),arr.end());
        
        
        int maxi = 0;
       
        int count = 1;
        for(auto itr : us)
        {
            if(us.find(itr-1)==us.end())
            {
                while(us.find(itr+1)!=us.end())
                {
                    count++;
                    itr = itr + 1;
                }
                
                maxi = max(count,maxi);
            }
            count = 1;
        }
        
        return maxi;
    }
int main()
{
    vector<int>v = {160, 53, 227, 139, 496, 398, 184, 187, 282, 331, 59, 496, 163, 497, 99, 477, 137, 223, 106, 351, 52, 109, 289, 342, 493, 438, 216, 69, 117, 248, 354, 242, 41, 102, 264, 273, 144, 1, 39, 315, 407, 171, 401, 254, 80, 400, 256, 151, 149, 237, 375, 139, 427, 451, 380, 430, 124, 20, 307, 493, 118, 273, 459, 454, 449, 63, 406, 25, 484, 77, 240, 441, 319, 26, 202, 231, 319, 167, 336, 254, 131, 269, 184, 100, 430, 216, 417, 348, 28, 30, 260, 289, 233, 345, 489, 458, 447, 46, 56, 106, 464, 404, 114, 41, 320, 348, 494, 452, 196, 203, 429, 18, 115, 73, 153, 263, 7, 287, 404, 277, 392, 255, 244, 108, 161, 57, 322, 74, 107, 222, 88, 57, 262, 205, 379, 428, 325, 190, 349, 232, 293, 322, 473, 278, 481, 274, 444, 143, 37, 31, 464, 232, 20, 10, 432, 128, 30, 486, 227, 460, 46, 131, 412, 405, 416, 224, 333, 162, 490, 166, 38, 144, 284, 326, 29, 82, 386, 292, 148, 49, 285, 498, 110, 442, 493, 481, 230, 82, 397, 155, 56, 214, 495, 340, 373, 203, 193, 348, 397, 334, 320, 29, 107, 15, 341, 461, 277, 47, 65, 148, 432, 277, 485, 219, 438, 7};

    cout<<longestConsecutive(v);
return 0;
}

// 1 7 7 10 15 18 20 20 25 26 28 29 29 30 30 31 37 38 39 41 41 46 46 47 49 52 53 56 56 57 57 59 63 65 69 73 74 77 80 82 82 88 99 100 102 106 106 107 107 108 109 110 114 115 117 118 124 128 131 131 137 139 139 143 144 144 148 148 149 151 153 155 160 161 162 163 166 167 171 184 184 187 190 193 196 202 203 203 205 214 216 216 219 222 223 224 227 227 230 231 232 232 233 237 240 242 244 248 254 254 255 256 260 262 263 
// 264 269 273 273 274 277 277 277 278 282 284 285 287 289 289 292 293 307 315 319 319 320 320 322 322 325 326 331 333 334 336 340 341 342 345 348 348 348 349 351 354 373 375 379 380 386 392 397 397 398 400 401 404 404 405 406 407 412 416 417 427 428 429 430 430 432 432 438 438 441 442 444 447 449 451 452 454 458 459 460 461 464 464 473 477 481 481 484 485 486 489 490 493 493 493 494 495 496 496 497 498

