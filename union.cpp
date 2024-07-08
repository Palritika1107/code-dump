#include<bits/stdc++.h>
using namespace std;

    
    
    
    
    
    
    int doUnion(int a[], int n, int b[], int m)  {
    set<int>u;
    int i=0;
    // sort(b,b+m);
    while(i<n)
    {
        bool present = binary_search(u.begin(),u.end(),a[i]);
        // cout<<present;
        if(!present)
        {
             u.insert(a[i]);
            
        }
        i++;
        
    }
    // cout<<endl;
    // cout<<u<<endl;
    // for(int x :u)
    // {
    //     cout<<x;
    // }
    // cout<<endl;
    int j = 0;
    while(j<m)
    {
    //     for(int x :u)
    // {
    //     cout<<x;
    // }
    // sort(u.begin(),u.end());
    // cout<<endl;
        bool present = binary_search(u.begin(),u.end(),b[j]);
        // cout<<present<<endl;
        if(!present)
        {
             u.insert(b[j]);
            
        }
        j++;
    }
    // cout<<endl;
    
    return u.size();
    }

    int main()
    {
        int n=2,m=6;
        int a[2]={4,4};
        int b[6]={1,4,2,3,5,4};
        cout<<doUnion(a,n,b,m)<<"\n";
    }