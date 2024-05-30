#include<iostream>
using namespace std;
class node {
    public:
    int val ;
    node* left;
    node* right ;
    node (int data){
        val=data;
        left= NULL;
        right= NULL;
    }
};
 int  treeDefth (node* root){
    if (root==NULL) return 0;
    if (root->left==NULL&&root->right==NULL)
    {
      cout<<root->val<<" ";
      return 1;
    }
    return treeDefth (root->right)+ treeDefth (root->left);
 }
int main (){
    node* root = new node (10);
    root->left = new node (5);
    root->right= new node (3);
    root->left->left= new node (6);
    root->left ->right =new node (7);
    root-> right ->right = new node (20);
    root->right->right->right= new node (1);
     root->left ->right->left = new node (8);
      root->left ->right->right = new node (17);
      int Numberofleaf=  treeDefth (root);
    cout<<"\nnumber of leaf in tree is : "<<Numberofleaf<<endl;
    /*
        10
    5       3 
6      7      20
     8     17      1
    */
}