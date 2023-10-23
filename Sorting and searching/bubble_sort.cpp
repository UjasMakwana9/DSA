#include <bits/stdc++.h>

using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int n = 8;
    // int arr[n] = {10, 22, 9, 6, 7, 13, 34, 43};===========>O(n2)
    int arr[n]={1,2,3,4,5,6,7,8};
    for(int i=n-1;i>=1;i--)
    {
    int didswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
            if(didswap==0)
            {
                break;
            }
            cout<<"run";
    }

    print(arr,n);
    return 0;
}