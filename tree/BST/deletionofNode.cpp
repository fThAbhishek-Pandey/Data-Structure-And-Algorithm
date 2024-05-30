#include<iostream>
using namespace std;
class node{
    public: 
    int val;
    node*left;
    node* right;
    node( int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
class BST {
   public:
   node* root;
   BST (){
    root=NULL;
   }
   void insert (int data){
    node* new_node= new node (data);
    if (root==NULL){
        root=new_node;
        return;
    }
    node* temp= root;
    while (true){
    if(temp->val>data){
        if (temp->left==NULL){
            temp->left= new_node;
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
   }}
};
node* largestnode (node* root){
        node* curr=root;
        while (curr&&curr->right){
            curr= curr->right;
        }
        return curr;
 }
 node* deleteBST (node*root,int key){
    if (root==NULL) return root;
    if (root->val<key) root->right= deleteBST (root->right,key);
    else if (root->val>key) root->left= deleteBST (root->left,key);
    else {
        if (root->left==NULL&&root->right==NULL){// if detected node has only zero child
          free(root);
          return NULL;
        }
        //node has one child 
        else if (root->left==NULL) {
            node* temp = root->right;
            free(root);
            return temp;  
        }
        else if (root->right ==NULL){
            node * temp= root->left;
            free(root);
            return temp;
        }
        else {// where node has two child 
            node* justsmaller = largestnode (root->left);
            root->val= justsmaller->val;
            root->left = deleteBST(root->left,key);
        }

    }
    return root;
 }
 
void display (node*root){
    if (root==NULL) return ;
  
    display (root->left);
     cout<<root->val<<" ";
    display (root->right);
     
}
int main(){
         BST bst;
        bst.insert(5);
        bst.insert(8);
        bst.insert(6);
        bst.insert(7);
        bst.insert(9);     
        bst.insert(3);
        bst.insert(1);
        bst.insert(4);
        display(bst.root);
        node* ans=NULL;
      
        cout<<"\nthe element is present : "; 
        cout<< deleteBST (bst.root,1)->val;
         cout<<endl;
        display(bst.root);
           cout<<"\nthe element is present : "; 
               
       cout<< deleteBST (bst.root,8)->val;
       cout<<endl;
        display(bst.root);
}