#include<iostream>
using namespace std;
class node {
    public: 
         int val;
         node* left ;
         node* right;
         node(int data){
            val= data;
            left= NULL;
            right=NULL;       
         }
};
void inOrder (node* root){
    if (root==NULL) return ;
     inOrder (root->left);
     cout<<root->val<<" ";
     inOrder(root->right);
}
int main (){
    node * root= new node (5);
    root->left = new node (4);
    root->right = new node (7);
    root->left->left = new node (2);
    root->left->right = new node (1);
    root->right->right= new node (9);
    /*
      5
    4   7
2     1   9 
    */
    inOrder (root);
    return 0; 
}