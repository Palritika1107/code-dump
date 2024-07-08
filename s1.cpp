#include<bits/stdc++.h>
using namespace std;



string solve(string text) {
    
    for(int i=0;i<text.length();i++)
    {
        // text[i] = text[i]+32;
        
        int d = text[i]-97;
        text[i] = 122-d ;
        
        // else
        // {
        //     int d = 122 -text[i];
        //     text[i] = 97+d;
        // }
    }
    return text;
    
}
int main()
{
    cout<<solve("abcd");
    cout<<solve("zyxw");
    return 0;
}