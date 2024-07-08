#include<bits/stdc++.h>
using namespace std;
void addP(int n)
{
    string s = to_string(n);
    if(s.length() == 1)
        cout<<"0"<<endl;
    
    while(s.length() != 1)
    {
        int sum =0;
        while(n!=0)
        {
            int d = n%10;
            sum = sum+d;
            n=n/10;
        }
        s = to_string(sum);
        n=sum;
    }
    cout<<s<<endl;

}

int main()
{
    addP(1728);

    return 0;
}