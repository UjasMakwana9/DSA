#include<bits/stdc++.h>

using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    int left=low; int right=mid+1;
    vector<int>v;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            v.emplace_back(arr[left]);
            left++;
        }
        else
        {
            v.emplace_back(arr[right]);
            right++;

        }
    }
    while(left<=mid)
    {
        v.emplace_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        v.emplace_back(arr[right]);
        right++;

    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=v[i-low];
    }



}
void mergesort(int arr[],int low,int high)
{
    if(low==high) return;

    int mid=(low+high)/2;

    mergesort(arr,low,mid);

    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
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
    int arr[n] = {10, 22, 9, 6, 7, 13, 34, 33};//===========>O(n2)
    // int arr[n]={1,2,3,4,5,6,7,8};//O(n)

    mergesort(arr,0,n-1);

    print(arr,n);

return 0;
}   