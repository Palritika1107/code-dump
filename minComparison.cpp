#include<bits/stdc++.h>
using namespace std;
struct Pair 
{
    public:
    int min;
    int max;
};

//  linear search Time:O(n), nos of comparisons:2+2(n-2)=>worst,best=> 2+(n-2)

struct Pair getMinMax(int arr[],int n)
{
   struct Pair minmax;
    
    if(n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        
        return minmax;
    }
    
        if(arr[0] > arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        
        for(int i=2;i<n;i++)
        {
            if(arr[i]>minmax.max)
                minmax.max = arr[i];
                
            else if(arr[i]<minmax.min)
                minmax.min = arr[i];
        }
        return minmax;

}

// Divide and conquer time:O(n) ,nos of comparisons:3n/2 - 2

// struct Pair getMinMax(int arr[],int low,int high)
// {
//     struct Pair minmax,mml,mmr;
    
//     if(low == high)
//     {
//         minmax.min = arr[low];
//         minmax.max = arr[low];
        
//         return minmax;
//     }
    
//         if(high == low+1){
            

//         if(arr[low] > arr[high])
//         {
//             minmax.min = arr[high];
//             minmax.max = arr[low];
//         }
//         else
//         {
//             minmax.min = arr[low];
//             minmax.max = arr[high];
//         }
//         return minmax;
        
//         }
        
//         int mid = (low+high)/2;
//         mml = getMinMax(arr,low,mid);
//         mmr = getMinMax(arr,mid+1,high);
        
//         if(mml.min > mmr.min)
//         {
//             minmax.min = mmr.min;
//         }
//         else
//         {
//             minmax.min = mml.min;
//         }
        
//         if(mml.max > mmr.max)
//         {
//             minmax.max = mml.max;
//         }
//         else
//         {
//             minmax.max = mmr.max;
//         }
        
//         return minmax;

// }

//Compare in pairs ,time:O(n),nos. of comparisons=>1 + 3(n-2)/2

// struct Pair getMinMax(int arr[],int n)
// {
//     struct Pair minmax,mml,mmr;
//     int i = 0;
    
//     if(n%2 == 0)
//     {
//         if(arr[0] < arr[1])
//             {
//                 minmax.min = arr[0];
//                 minmax.max = arr[1];
//             }
//         else
//         {
//             minmax.min = arr[1];
//             minmax.max = arr[0];
//         }
//         i+=2;
//     }
//     else
//     {
//         minmax.min = arr[0];
//         minmax.max = arr[0];
//         i+=1;
//     }
        
//         while(i < n-1)
//         {
//             if(arr[i]>arr[i+1])
//             {
//                 if(arr[i]>minmax.max)
//                     minmax.max = arr[i];
                
//                 if(arr[i+1]<minmax.min)
//                     minmax.min = arr[i+1];
//             }
//             else
//             {
//                 if(arr[i+1]>minmax.max)
//                     minmax.max = arr[i+1];
                
//                 if(arr[i]<minmax.min)
//                     minmax.min = arr[i];
//             }
//             i+=2;
//         }
        
//         return minmax;

// }

// method 2 and 3 have the same nos of comparisons

int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    Pair minmax = getMinMax(arr,arr_size);
                              
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}