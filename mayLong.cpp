#include<bits/stdc++.h>
using namespace std;
 
//  int totalSugar(int X,int A,int B)
//  {
//     int totML = A + (100-X)*B;
//     int totL = totML*10;

//     return totL;
//  }
 
 bool possible(int N,int x,int k)
 {
    //  vector<int>p;
    // //  p.push_back(0);
    // int i,j;
    //  for(i=0,j=N+1;i<=N+1,j>=0;i+=k,j-=k)
    //  {
    //     //  p.push_back(i);
    //     if( i == x || j == x){
    //         return true;
    //     //     // cout<<"YES";
    //     }
    //  }
    // //  auto it = find(p.begin(),p.end(),x);

    // //  if(it != p.end())
    // //     return true;
    // //  else
    // //     return false;

    // return false;
    if(x%k == 0 or (N+1-x)%k ==0)
        return true;
    else
        return false; 
    
 }


// long long  nosEven(long long  N)
// {
//     long long  c = pow(2,N);
//     cout<<c<<endl;
//     return c/2;
// }
 
 int main()
 {
     int N,x,k;
    
     long long int t;
     cin>>t;
    
     while(t--)
     {
        scanf("%d %d %d",&N,&x,&k);
        
        if(!possible(N,x,k))
            printf("NO\n");
        else
            printf("YES\n");

        
     }


     
     return 0;
 }
