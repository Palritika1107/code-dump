#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,l=0;
        vector<string>a;
        // string s1;
        // ostringstream vts;
        while(j<s.length())
        {
            for(i=j;i<s.length();i++)
            {
                auto present = find(a.begin(),a.end(),s[i]);
                if(present == a.end())
                {
                    str stri = s[i];
                    a.push_back(stri);
                    if(a.size() > l){
                        l = a.size();
                         // copy(S[i],ostream_iterator<int>(vts)); 
                         // vts << .back(); 
  
                                    }
                }
                else
                {
                    a.clear();
                    j++;
                    break;
                }
            }
        }
        
        return l;
    }
};
int main()
{
    Solution ob;
    string st = "abcabcbb";
    cout<<ob.lengthOfLongestSubstring(st);
    return 0;
}