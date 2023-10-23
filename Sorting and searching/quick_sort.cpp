#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        while(i<=high-1 && arr[i]<=pivot)  {//>  for desending
            i++;
        }
        while(j>=low+1 && arr[j]>pivot){//<  for desending
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(int arr[],int low,int high)
{
    if(low<high){
        int part=partition(arr,low,high);
cout<<part; 
        qs(arr,low,part-1);

        qs(arr,part+1,high);
    }
    else
    {
        return ;
    }
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
    int arr[4]={1,4,2,3};

    qs(arr,0,3);

    print(arr,4);
return 0;
}