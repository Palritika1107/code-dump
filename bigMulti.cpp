#include<bits/stdc++.h>
using namespace std;
#define MAX 158
// O(n^2) approach simple high school math multiplication
// O(n^1.45..) approach use jAVA BigInteger
// faster than all above -> fast fourier transform(read)
int calMulti(int x,int res[],int res_size)
{
    int carry=0;
    int i;
    for(i=0;i<res_size;i++)
    {
        int m = x*res[i]+carry;
        res[i] = m%10;
        carry = m/10;
    }
    while(carry)
    {
        res[i]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
void extraLongFactorials(int n) {
    int res[MAX];
    res[0]=1;
    int res_size=1;
    for(int x=2;x<=n;x++)
    {
        res_size = calMulti(x,res,res_size);
    }
    
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }

}
int main()
{
    extraLongFactorials(6);
    
    return 0;
}