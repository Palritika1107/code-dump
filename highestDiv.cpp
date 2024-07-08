#include<bits/stdc++.h>
using namespace std;

int highestDiv(int n)
{
    int g=1;
    for(int i=2;i<=10;i++)
    {
        if(n%i == 0 && i>g)
            g=i;
            
    }
    return g;
}



int main()
{
    int n;
    cin>>n;
    cout<<"\n"<<highestDiv(n);
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   vector<vector<int>>a={{1,2,3,4},{5,6,7,8}};
//   // cout<<typeid(a.size()).name();
//   // cout<<PRINT_NAME(char);
//    PRINT_NAME(signed char);
//   return 0;
// }