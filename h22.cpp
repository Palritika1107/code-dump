#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

void solve(string s)
{
    vector<string>st;
    string temp = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            st.push_back(temp);
            temp = "";
        }
        else
        {
            temp+=s[i];
        }
    }
    st.push_back(temp);
    
    for(int i=st.size()-1;i>0;i--)
    {
        cout<<st[i]<<" ";
    }
    cout<<st[0];
}


int main()
{

    string sen = "hello there my";
    solve(sen);

    return 0;
}