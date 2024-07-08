#include<bits/stdc++.h>
using namespace std;

class BST
{
    
    public:
    int data;
    BST*left,*right;

    BST();
    BST(int);
    void Inorder(BST*);
    BST* Insert(BST*,int);
    BST* Deletenode(BST*,int);
    BST* findSmall(BST*);
};

BST::BST():data(0),left(NULL),right(NULL)
{ }

BST::BST(int val){

   data = val;
   left = right = NULL;
}

BST* BST::findSmall(BST*root)
{
   BST*curr = root;
   while(curr && curr->left != NULL)
   {
      curr = curr->left;
   }
   
   return curr;
}

BST* BST:: Insert(BST* root,int data)
{
   if(!root)
   {
       return new BST(data);
   }
   if(data > root->data){
      root->right =  Insert(root->right, data);
   }
   else
   {
      root->left = Insert(root->left, data);
   }

   return root;
}

void BST :: Inorder(BST* root)
{
    if(root!=NULL)
    {
       
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
    }
}

BST* BST::Deletenode(BST*root,int data)
{
   // BST* temp;
   if(!root)
   {
      return root;
   }
   if(data > root->data)
   {
      root->right = Deletenode(root->right, data);
   }
   if(data < root->data)
   {
      root->left = Deletenode(root->left, data);
   }

   // if(root->right != NULL  && root->left != NULL)
   // {
   //    temp = findSmall(root->right);
   //    root->data = temp->data;
   //    root->right = Delete(root->left, temp->data);
   // }

   else 
   {
  
    if(root->left == NULL)
     { 
         BST*temp = root->right;
         free(root);
         //root = root->right;
         return temp;
     }
     else if(root->right == NULL)
     {
         //   root = root->left;
          BST* temp = root->left;
         free(root);
         return temp;
     }
   
   else  if(root->right!=NULL && root->left != NULL){
      BST*temp = findSmall(root->right);
      root->data = temp->data;
      root->right = Deletenode(root->right, temp->data);
   // free(temp);
   }
   }

   return root;
}
int findKthLargestValueInBst(BST *tree, int k) {
  // Write your code here.
	int val=0,count =0;
	findVal(tree,k,val,count);
  return val;
}
void findVal(BST*tree,int k,int &val,int &count)
{
	if(count == k)
		return;
	if(tree == NULL)
		return ;
	
	findVal(tree->right,k,val,count);
	if(count == k)
		return;
	// if(val != tree->value){
	count++;
	val = tree->value;
// }
	
	findVal(tree->left,k,val,count);
	if(count == k)
		return;
	
}


int main()
{
   // BST b,*root=NULL;
   // root = p.Insert(root,70);
   // root = b.Insert(root, 50); 
   //  b.Insert(root, 30); 
   //  b.Insert(root, 20); 
   //  b.Insert(root, 40); 
   //  b.Insert(root, 70); 
   //  b.Insert(root, 60); 
   //  b.Insert(root, 80); 

   //  p.Insert(root, 80); 
   //  p.Insert(root, 90); 
   //  p.Insert(root, 85); 
   //  p.Insert(root, 95); 
   //  p.Insert(root, 60); 
   //  p.Insert(root, 50); 
   //  p.Insert(root, 40); 
    
//     b.Inorder(root); 
//     cout<<".......deleting........"<<"\n";

//   BST* newroot =  b.Deletenode(root,60);
//     cout<<"............after deleting..........."<<"\n";

//    b.Inorder(newroot); 
      BST*root = new BST(15);
      root->left = new BST(5);
      root->left->left = new BST(2);
      root->left->left->left = new BST(1);
      root->left->left->right = new BST(3);
      root->left->right = new BST(5);
      root->right = new BST(20);
      root->right->left = new BST(17);
      root->right->right = new BST(20); 


return 0;
}
//problem arising when immediate successor is deleted

