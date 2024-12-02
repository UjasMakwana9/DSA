#include<bits/stdc++.h>


using namespace std;
// Brute Force
// TC : O(n2)
// Sc : O(n)
    vector<int> search(string& pat, string& txt) {
        vector<int>v;
            int M = pat.size();
    int N = txt.size();

    // A loop to slide pat[] one by one
    for (int i = 0; i <= N - M; i++) {
        int j;

        // For current index i, check for pattern match
        for (j = 0; j < M; j++) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If pattern matches at index i
        if (j == M) {
            cout << "Pattern found at index " << i << endl;
            v.push_back(i);
        }
        return v;
    }
}
// Better approach due to internal optimizations
// TC : O(n2)
    vector<int> search(string& pat, string& txt) {
        vector<int>v;
        int index = txt.find(pat);
        while(index!=string::npos){
            v.push_back(index);
            
                index = txt.find(pat,index+1);
        }
        return v;
    }
// Optimised Approach
int main()
{

return 0;
}