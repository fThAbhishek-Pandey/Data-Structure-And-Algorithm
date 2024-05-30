#include<iostream> 
using namespace std;
class node{
    public: 
    int val;
    node* left;
    node* right;
    node (int data) {
         val= data;
        left= NULL;
        right = NULL;
    }
};
class BST  {
    public:
      node* root;
      BST (){
        root= NULL;
      }
      void insert (int data){
       // node * newNode = new node (data);
        if (root==NULL) {
           root= new node(data);
           return;
        }
        node* temp = root;
        while (true){
            if(temp->val>data){
                if (temp->left==NULL){
                    temp->left=new node(data);
                    return;
                }
                temp=temp->left;
            }
            else {
                if (temp->right==NULL ){
                    temp->right= new node(data);
                    return;
                }
                temp = temp->right;
            }
        }
      }
};
node * removeAllLeafNode (node* root){
    if (root==NULL) return NULL;
    if(root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }
     root->left= removeAllLeafNode(root->left);
    root->right= removeAllLeafNode(root->right);
    return root;
}
void display (node* root){
    if (root==NULL) return ;
    display(root->left);
     cout<<root->val<<" ";
    display (root->right);
}
int main (){
       BST bst;
       bst.insert(5);
       bst.insert(3);
       bst.insert(2);
       bst.insert(4);
       bst.insert(8);
       bst.insert(6);
       bst.insert(9);
       bst.insert(7);
       display (bst.root);
       node* root2 = removeAllLeafNode(bst.root);
       cout<<endl;
       display (root2);
    return 0;
}