#include <bits/stdc++.h>

using namespace std;
void print(int arr[], int size)
{
    // cout<<"ujas"<<endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 8;
    // cin>>n;
    int arr[n] = {10, 22, 9, 6, 7, 13, 34, 43};
    // int arr[n]
    // for(int i=0;i<n-1;i++)
    // {
    //     cin>>arr[i];
    // }
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;

        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }
    print(arr, n);
    return 0;
}