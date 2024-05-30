#include<iostream>
using namespace std;
class node {
    public: 
        int val;
        node* left;
        node* right;
        node(int data){
            val=data;
            left=NULL;
            right= NULL;
        }
};
class BST {
   public: 
   node* root;
   BST (){
    root=NULL;
   }
   void insert (int data){
    node* new_node= new node(data);
    if (root==NULL){
        root= new_node;
        return;
    }
    node*temp =root;
    while (true){
        if (temp->val>data){
            if (temp->left==nullptr){
                temp->left=new_node;
                return;
            }
            temp=temp->left;
        }
        else {
            if (temp->right==NULL){
                temp->right=new_node;
                return;
            }
            temp=temp->right;
        }
    }
   }
 
};
  void display (node* root){
    if (root==NULL) return;
   
    display(root->left);
     cout<<root->val<<" ";
    display (root->right); 
   }

int main (){
        BST bst;
        bst.insert(5);
        bst.insert(6);
        bst.insert(4);
        bst.insert(9);
        bst.insert(8);     
        bst.insert(2);
        bst.insert(1);
        bst.insert(3);
        display(bst.root);
        
}