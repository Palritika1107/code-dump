// #include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;

bool f(int x ,int y){

    return x>y;
}
void demoVector(){
    //cout<<"hello world!"<<endl;
    vector<int> A ={11,2,3,14};
    cout<<A[1]<<endl;
    sort(A.begin(),A.end());
    cout<<A[0]<<endl;
    cout<<"last index:"<<A.size()-1<<endl;
    A.push_back(100);
    cout<<A[4]<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    // vector<int>::iterator it = lower_bound(A.begin(),A.end(),100); // >=
    cout<<"max :"<<*max_element(A.begin(),A.end())<<endl;
    auto it = lower_bound(A.begin(),A.end(),100); // >=
    auto it2 = upper_bound(A.begin(),A.end(),100); // >

    // cout<<A[it]<<"\n"; // wrong syntex it is a pointer 
    cout<< *it <<" "<< *it2;
    cout<<endl<<it2-it<<endl ; 

    // cout<<it<<endl;
    bool present = binary_search(A.begin(),A.end(),123);
    cout<<endl<<"binary_search"<<present<<endl;
    //sorting in descending order
    sort(A.begin(),A.end(),f);

    // vector<int>::iterator it3;

    // to change values we cane use &x instead of x

    for(int &x : A){
        // here x is passed by reference so value of x changes on doing x++
         x++;
    }
    cout<<"size:"<<A.size()<<endl;
    for(int j=0;j<=3;j++)
    {
        cout<<A[j];
    }

    for(int x : A)
    {
        // doing x++ here won;t change the values since here x is passed by value
      cout<< x<<" ";

    }
    cout<<endl;

}
void demoSet(){
    //inserts and removes elements in logN time

    set<int> S;
    S.insert(2);
    S.insert(-10);
    S.insert(-1);
    S.insert(1);
  
    for(int x:S){
        cout<<x<<" ";
    }
    cout<<endl;
    // auto ite = S.find(2);
    // if(ite == S.end())
    // {
    //     cout<<"not present"<<endl;
    // }
    // else
    // {
    //     cout<<"present "<<endl;
    // }
    // auto ite1 = S.lower_bound(2);
    // auto ite2 = S.upper_bound(-1);    
    // // cout<< *ite1 << " "<< *ite2<<endl;
    // cout<<"number of elements less than 2:"<<distance(S.begin(),prev(ite1,1))<<endl;
    // cout<<"number of elements more than -1:"<<distance(ite2,S.end())<<endl;

    // auto ite3 =  S .upper_bound(2);
    // if (ite3 == S.end())
    // {
    //     cout<<"oops!";
    // }
    // //to remove numbers use S.erase(1);
    
}
void demoMap(){
    map<int,int> m1;
    m1[1] = 10000;
    m1[2]=9078;
    m1[904744]=1;

    map<char,int> m2;
    string x = "ritika pal";
    for (char c: x){
        m2[c]++;
    }
    cout<<m2['a']<<" "<<m2['l']<<endl;
}
void powerStl(){

    set<pair<int,int>> p;
    p.insert({401,450});
    p.insert({10,20});
    p.insert({30,400});
    p.insert({2,3});

    int point = 50;

    auto i9 = p.upper_bound({ point , INT16_MAX });
    if(i9 == p.begin())
    {
        cout<<"doesn't exist";
        return;
    }
    i9--;
    pair<int,int> current =  *i9;
    if(current.first<=point && point <= current.second)
    {
        cout<<"present:"<<" "<<current.first<< " "<<current.second;
    }
    else
    {
        cout<<"not present";
    }
    
    
}

int main(){

    // demoSet();
    // demoMap();
    // powerStl();
    demoVector();
    return 0;
}