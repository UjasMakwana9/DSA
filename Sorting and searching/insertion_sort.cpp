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
    // int arr[n] = {10, 22, 9, 6, 7, 13, 34, 33};===========>O(n2)
    int arr[n]={1,2,3,4,5,6,7,8};//O(n)
    int didswap=0;
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
            cout<<"run";
        }
    }

    print(arr,n);
    return 0;
}  