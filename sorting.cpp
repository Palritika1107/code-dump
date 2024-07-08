#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[])
{
    int n=6;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

}
void bubbleRecurr(int arr[],int n)
{
    if(n == 1)
        return;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    bubbleRecurr(arr,n-1);
}

int binarySearch(int arr[],int n,int x)
{
    int k=0;

    // int b=n;
    // while(a<b)
    // {
    //     int mid = (a+b)/2;
    //     if(arr[mid] == x)
    //         return mid;

        
    //     if(x > arr[mid])
    //         a=mid+1;
    //     else
    //         b=mid-1;
    // }
    // return -1;
    sort(arr,arr+n);
    for(int i=n/2;i>=1;i/=2)
    {
        while(k+i<n && arr[k+i]<=x) {
            k+=i;
        }

    }
    if(arr[k] == x)
        return k;

    else
        return -1;
}



int main()
{
    
    int arr[10] = {4,7,8,9,3,2};
    bubbleRecurr(arr,6);
    
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    
    // cout<<"found at"<<binarySearch(arr,6,8);
    

    return 0;

}