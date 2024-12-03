#include<bits/stdc++.h>


using namespace std;
// Brute Force
// TC : O(n2)
// SC : O(n)
  bool check(string &s1)
  {
      string temp = s1;
      reverse(temp.begin(),temp.end());
      return temp==s1;
  }
    int minChar(string& s) {
        // Write your code here
        
        int count = 0;
        while(!check(s))
        {
           s.pop_back();
           count++;
        }
        return count;
    }
// Optimal approach
    int minChar(string& s) {
     string revStr = s;
    reverse(revStr.begin(), revStr.end());

    string combined = s + "#" + revStr;
    vector<int> lps(combined.size(), 0);

    for (int i = 1; i < combined.size(); i++) {
        int j = lps[i - 1];
        while (j > 0 && combined[i] != combined[j]) {
            j = lps[j - 1];
        }
        if (combined[i] == combined[j]) {
            j++;
        }
        lps[i] = j;
    }

    return s.size() - lps.back();
}

int main()
{

return 0;
}