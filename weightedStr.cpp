#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int createSortedArray(vector<int>& instructions) {
    //     multiset<int>nums;
    //    unsigned int total =0;
    //    for(int x:instructions)
    //    {
    //        auto lower = nums.lower_bound(x);
    //        auto upper = nums.upper_bound(x);
    //        int d1 = distance(nums.begin(),lower);
    //        cout<<"d1:"<<d1<<" ";
    //        int d2 = distance(upper,nums.end());
    //        cout<<"d2:"<<d2<<" ";
    //        total = total+min(d1,d2);
    //        cout<<"total:"<<total<<endl;
    //        nums.insert(x);
    //        for(int x:nums)
    //        {
    //            cout<<x<<" ";
    //        }
    //        cout<<endl;
    //    }
    //    return total;

    int createSortedArray(vector<int>& instructions)
    {
        int max = *max_element(instructions.begin(),instructions.end());
        vector<int>fen(max+1,0);
        int cost = 0;
        int lessThan,moreThan;
        cout<<"fen size:"<<fen.size();
        for(int x:instructions)
        {
           int highest = sum(fen.size(),fen); 
           if(x == 1){
            lessThan = 0;}
           else{
            lessThan = sum(x-1,fen);}
           moreThan = highest - (sum(x,fen));
           cost += min(moreThan,lessThan);
           update(x,1,fen);
        }
         return cost;
    }

    
        
        void update(int i,int update,vector<int>& fen)
        {
            if(i<fen.size()+1)
            {
                fen[i]+=update;
                i = i+(i & -i);
            }
        }
        int sum(int i,vector<int>& fen)
        {
          int s=0;
          while(i>0)
          {
            s+=fen[i];
            i = i-(i & -i);
          }
          return s;
        }
   
};
int main()
{
    Solution s;
    // vector<int>instructions = {1,5,6,2};
    vector<int>instructions = {1,3,3,3,2,4,2,1,2};
    // vector<int>instructions = {1,2,3,6,5,4};
    int cost = s.createSortedArray(instructions);;
    cout<<"cost is:"<<cost;
    return 0;
    //THIS CODE(the one using lower and upper bound) GIVES TLE THIS IS PROBABLY AN AD HOC METHOD WE WILL HAVE TO USE FENWICK TREE
}