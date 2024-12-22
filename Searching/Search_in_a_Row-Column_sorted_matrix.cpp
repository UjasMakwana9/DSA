#include<bits/stdc++.h>


using namespace std;
// Time Complexity ==> O(n log n)
// Space Complexity ==> O(1)
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        
        for(int i=0;i<n;i++)
        {
            if(binary_search(mat[i].begin(),mat[i].end(),x))
            {
                return true;
            }
        }
        return false;
    }
// Optimal Solution 
// Time Complexity ==> O(n + m)
// Space Complexity ==> O(1)
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        
        int row = 0;
        int col = m-1;
        
        while(row<n && col>=0)
        {
            if(mat[row][col]==x)    return true;
            else if (mat[row][col] < x ) row++;
            else col--;
        }
        return false;
    }

int main()
{

return 0;
}