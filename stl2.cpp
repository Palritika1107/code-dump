#include<bits/stdc++.h>
// #include<utility>
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<set>
// #include<map>
using namespace std;


void explainPair()
{

    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second;
    
    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<endl<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first;

    pair<int,int>arr[] = {{1,2},{3,4},{8,9}};
    cout<<endl<<arr[1].second;


}
void explainMap()
{
    map<int,int>m1;
    for(auto itr=m1.begin();itr != m1.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<" "<<endl;
    }
    cout<<endl;
    
    m1.insert({4,2});
    m1.insert({2,1});
      m1.insert({3,1});
    for(auto itr=m1.begin();itr != m1.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<" "<<endl;
    }
    cout<<endl;
    m1[2]++;
    for(auto itr=m1.begin();itr != m1.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<" "<<endl;
    }
    
}

int main()
{
    
    // explainPair();
    // explainMap();

    vector<int> a(7,0);
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}
