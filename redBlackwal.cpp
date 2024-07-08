#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;
// 0:RED 1:Black
class BST
{
    pair<int,int>data;
    Bst*left,*right;

    BST(int value,int color)
    {
        data = {value,color};
        left=NULL;
        right=NULL;
    }
}

BST* BST::insert(BST*root,pair<int,int>d)
{
    // if(root == NULL)
    // {
    //     return new BST(d.first,d.second);
    // }
    if()
}


int main() {

     BST b,*root;
     root = new BST(1,0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    return 0;
}

