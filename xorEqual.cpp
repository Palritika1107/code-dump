#include<bits/stdc++.h>
using namespace std;

const int MX =1e5+5;
const int MOD =1e9+7;

vector<int>a(MX);

void preCount()
{
    a[1]=1;
    for(int i=2;i<MX;i++)
    {
        a[i] = (a[i-1]*2)%MOD;
    }
}

int main()
{
    int t;
    preCount();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<"\n";
    }
    
    return 0;
}