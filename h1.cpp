#include<bits/stdc++.h>
#include <any>
#include<vector>
#include<iostream>

using namespace std;

// void add2(int *x)
// {
//     *x = *x + 1;
// }
void add2(int &x)
{
    x = x + 1;
}

void showTuple()
{
    // tuple<int,int>t1(1,2);
    // tuple<int,int>t2(3,4);
    // t1.swap(t2);
    // cout<<get<0>(t1)<<"\n";
    
    // cout<<get<1>(t1)<<"\n";

    // cout<<get<0>(t2)<<"\n";

    
    // cout<<get<1>(t2)<<"\n";
    // tuple<int,char,bool>t3 = make_tuple(4,'h',true);
    // cout<<get<0>(t3)<<" "<<get<1>(t3)<<" "<<get<2>(t3)<<endl;
    // int x,y;
    // tie(y,x) = t1;
    // cout<<x<<endl;
    // cout<<y;

    // tuple concatenation

    tuple<int,char>t4(20,'t');
    tuple<char,string>t5('R',"hello");
    // tuple<int,char,char,string>t3 = tuple_cat(t4,t5);
    // auto : type inferencing 
    auto t3 = tuple_cat(t4,t5);
    cout<<get<0>(t3)<<endl;
    cout<<get<1>(t3)<<endl;
    cout<<get<2>(t3)<<endl;
    cout<<get<3>(t3)<<endl;


}

int main()
{
    // vector<vector<int>>vec = {2,{3,{4}}};
    // cout<<vec.size();

    // map<int,int>m1;
    // // m1.insert(pair<int,int>(25,1));
    // // m1.insert(pair<int,int>(10,1));
    // // m1.insert(pair<int,int>(20,1));
    // // m1.insert(pair<int,int>(10,1));
    // m1[10]++;
    // m1[20]++;
    // m1[25]++;
    // m1[10]++;

    // for(auto i=m1.begin();i!=m1.end();i++)
    // {
    //     cout<<i->first<<":"<<i->second<<endl;
    // }

    // int n = 5;
    // // add2(&n);
    // add2(n);
    // cout<<n;
    // vector<int>a;

    // for(auto x:a)
    // {
    //     if(x == none)
    //         cout<<1;
    // }

    showTuple();
    return 0;
}