#include <bits/stdc++.h>

using namespace std;
// Use it both it check if we can place the cows in stall with provided minimum distance
bool canWePlace(vector<int> &v, int maxValue, int k)
{
    int initial = v[0];
    int cnt = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - initial >= maxValue)
        {
            cnt++;
            initial = v[i];
        }
        if (cnt >= k)
            return true;
    }
    return false;
}
// Optimal Solution
// O(log n)
// O(1)
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int low = 1, high = stalls[n - 1] - stalls[0];
// it search for the max value of min distance between two cows
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (canWePlace(stalls, mid, k))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
// Brute Force
// TC : O(n)
int aggressiveCowsBruteForce(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int low = 1, high = stalls[n - 1] - stalls[0];

    while (low <= high)
    {

        if (canWePlace(stalls, low, k))
        {
            continue;
        }
        else
        {
            return low - 1;
        }
        low++;
    }
    return high;
}

int main()
{

    return 0;
}