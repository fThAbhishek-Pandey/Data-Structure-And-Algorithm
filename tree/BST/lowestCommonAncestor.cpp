#include<iostream>
using namespace std;
class node{
    public: 
     int val;
     node* left;
     node* right;
     node(int data){
        val=data;
        right=NULL;
        left=NULL;
     }
};
 class BST {
 public: 
          node* root;
          BST (){
            root= NULL;
          }
          void insert (int data){
            if(root==NULL){
                root= new node(data);
            }
            node* temp = root;
            while (true){
                if (temp->val>data){
                    if (temp->left==NULL){
                        temp->left= new node (data);
                        return;
                    }
                    temp=temp->left;
                }
                else {
                    if (temp->right==NULL){
                        temp->right= new node (data);
                        return;
                    }
                    temp=temp->right;
                }
            }
          }
 };
 void display (node* root){
    if (root==NULL) return ;
    display (root->left);
    cout<<root->val<<" ";
    display (root->right);
 }
 node * lowestCommonAncestor(node* root,node* node1,node* node2){
    if(root==NULL) return NULL;
    if (root->val>node1->val&&root->val>node2->val){
        //LCA WILL lie in left subtree 
        return lowestCommonAncestor(root->left,node1,node2);
    }
    if (root->val<node1->val&&root->val<node2->val){
        // lca will lie in right subtree 
        return lowestCommonAncestor(root->right,node1,node2);
    }
    //if root value lie between node1 and node2 or if root value is equal to any of node val
    return root;
 }
int main(){
         BST bst;
         bst.insert (5);
         bst.insert (3);
         bst.insert(2);
        bst.insert(4);
        bst.insert(8);
        bst.insert(7);
        bst.insert(9);
        display (bst.root);
        cout<<endl<<lowestCommonAncestor(bst.root,new node(7),new node (9))->val<<endl;
}