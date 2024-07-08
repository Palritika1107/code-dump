#include<bits/stdc++.h>
using namespace std;

// void selSort(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int min_idx = i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[min_idx] > arr[j])
//                 min_idx = j;
//         }
//         swap(arr[i],arr[min_idx]);
//     }
// }
// void bubbleSort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j] > arr[j+1])
//                 swap(arr[j],arr[j+1]);
//         }
//     }
// }
// void bubbleRecurr(int arr[],int n)
// {
//     if(n == 1)
//         return;
    
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > arr[i+1])
//             swap(arr[i],arr[i+1]);
//     }

//     bubbleRecurr(arr,n-1);
// }
// void insertionSort(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int key = i;
//         int j;
//         for(j=i-1;j>=0;j--)
//         {
//             if(arr[j]>arr[key])
//                 continue;
//             else
//                 break;
//         }
//         int f = j+1;
//         int ele = arr[key];
//         for(int k=key-1;k>=f;k--)
//             arr[k+1] = arr[k];
//         arr[f] = ele;

//     }
// }


int main()
{


    int arr[] = {3,6,7,99,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}