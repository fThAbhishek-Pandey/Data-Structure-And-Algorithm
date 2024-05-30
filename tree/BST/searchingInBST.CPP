#include<iostream>
using namespace std;
class node {
    public: 
    int val;
    node* left;
    node* right;
    node (int data){
        val=data;
        left= NULL;
        right= NULL;
    }
    
};
class BST {
    public:
    node* root;
    BST (){
        root= NULL;
    }
   void insert (int data){
    node* new_node = new node(data);
        if (root==NULL){
            root=new_node;
            return;
        }
        node* temp = root;
        while (true){
            if (temp->val>data){
                if (temp->left==NULL) {
                    temp->left=new_node;
                    return;
                    }
                temp=temp->left;
            }
            else {
                if (temp->right==NULL) {
                    temp->right= new_node;
                    return;
                }
                temp=temp->right;
            }
        }
    }
      
};
  void search (node* root ,int data,node* & ans){
        if (root==NULL) return;
        if (root->val==data) {
            ans= root;
            return;
        }
        if (root->val>data) {
            search(root->left,data,ans);
        }
        else if (root->val<data) search (root->right,data,ans);
    }
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
        //insert (bst.root,7);
        display(bst.root);
         node * ans =NULL;
        search (bst.root,6,ans);
        if (ans) cout<<"the ele are present : "<<ans->val<<endl;
        else cout<<"the ele is absent\n";
}