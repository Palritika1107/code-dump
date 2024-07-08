#include<bits/stdc++.h>
using namespace std;

int treatCount(vector<int>sizes)
{
  map<int,int>m1;
  int countTreat=0;
  int treat=1;
  for(int i=0;i<sizes.size();i++)
  {
      m1[sizes[i]]++;
  }
  for(auto i=m1.begin();i!=m1.end();i++)
    {
        countTreat += (i->second * treat);
        treat++;
    }
    return countTreat;
}

// int main()
// {
    
//     int t,n;
//     vector<int>sizeOfPets;
//     // cout<<"enter number of test cases";

//     cin>>t;
//     int k =1;
//     while(k<=t)
//     {
//         // cout<<"enter number of pets";
//         cin>>n;
//         int ele;
//         sizeOfPets.clear();
//         for(int i=0;i<n;i++)
//         {
//           cin>>ele;
//           sizeOfPets.push_back(ele);
//         }
//       cout<<"Case #"<<k<<":"<<" "<<treatCount(sizeOfPets)<<endl;

//         k++;
//     }

    
//     return 0;
// }

// Structure Node
struct Node {
	int val = -1;
	
};

// Driver Code
int main()
{
	// Map initialise with key value
	// pair with each pair mapped with
	// structure Node
// 	unordered_map<int, Node> Map;

// 	// Print the default value of 1
// 	// store in Map
// 	Map[2].value = 2;
// 	cout << Map[1].value << endl;
// 	cout << Map[2].value << endl;
// 	cout << Map[3].value << endl;

// 	return 0;
vector<int>array = {2,1,5,2,3,3,4};
unordered_map<int,Node>map;
	int idx = INT_MAX;
	

	for(int i=0;i<array.size();i++)
	{
		if(map[array[i]].val == -1){
      // cout<<array[i]<<" "<<map[array[i]].val<<" ";
				map[array[i]].val =i;
        // cout<<map[array[i]].val<<endl;
        }
		else if(idx > i){
			idx = i;}
	}
	
	if(idx == INT_MAX){
		cout<< -1;}
	cout<<array[idx];

	
	
	return 0;
}
