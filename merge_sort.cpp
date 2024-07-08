#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int l,int m,int h)
{
    int n1 = m-l+1;
    int n2 = h-m;
    int count_inv=0;

    int lar[n1];

    int rar[n2];
    for(int i=0;i<n1;i++)
    {
        lar[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
        rar[i] = arr[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 &&  j<n2)
    {
        if(lar[i] <= rar[j]){
            arr[k] = lar[i];
            i++;
        }
        else
        {
            arr[k] = rar[j];
            // count_inv = count_inv+ ((m+1)- i); -> this works fro striver's code as he uses different set of arrays to do the work
             count_inv = count_inv + (n1-i);
            j++;
        }
        k++;
        
    }

    while(i<n1)
    {
        arr[k] = lar[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = rar[j];
        j++;
        k++;
    }

  return count_inv;
}




int mergeSort(int arr[],int l,int h)
{
    int count_inv = 0;
    if(l >= h)
    {
        return count_inv;
    }
  int mid = l+(h-l)/2 ;
  count_inv += mergeSort(arr,l,mid);
  count_inv += mergeSort(arr,mid+1,h);
  count_inv += merge(arr,l,mid,h);
 
  return count_inv;
}


int main()
{
    
    // int arr[] = {9,3,7,5,6,4,8,2};
    // int arr[] = {5,3,2,4,1};
     int arr[] ={2, 4, 1, 3, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count_inv = mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"count inversions"<<count_inv;
    
    return 0;
}