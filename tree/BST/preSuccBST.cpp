#include<iostream> 
using namespace std;
class node {
    public: 
     int val;
     node* left;
     node* right;
     node(int data){
        val= data;
        left= NULL;
        right= NULL;
     }
};
class BST  {
      public: 
      node* root ;
      BST (){
        root=NULL;
      }
      void insert (int data){
        if (root== NULL) {
            root= new node(data);
            return;
        }
        node* temp = root;
        while (true){
            if (temp->val>data){
                if (temp->left==NULL) {
                    temp->left= new node(data);
                    return;
                }
                temp=temp->left;
            }
            else {
                if (temp->right==NULL) {
                    temp->right= new node(data);
                    return ;
                }
                temp=temp->right;
            }
        }
      }
};
void inOrderPreSuccBST (node* root,node*& pre,node* &succ,int key ){
    if(root==NULL) return ;
    if(root->left!=NULL) {
        node* temp = root->left;
        while (temp->right!=NULL){
            temp=temp->right;
        }
        pre= temp;
    }
    // succ ->leftmost node in right subtree 
     
    if (root->right !=NULL){
        node* temp = root->right;
        while (temp->left != NULL){
            temp =temp->left;          
        }
        succ = temp;
    }
    if (root->val>key ){
        succ= root;
        inOrderPreSuccBST(root->left,pre,succ,key);

    }
    else if (root->val<key){
        pre = root;
        inOrderPreSuccBST(root->right,pre,succ,key);
    }
}
void display (node* root){
    if (root==NULL) return;
    display (root->left);
    cout<<root->val<<"  ";
    display (root->right);
}
int main(){
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
      
       node*pre= NULL;
       node* succ= NULL;
       inOrderPreSuccBST(bst.root,pre,succ, 9);
       cout<<endl;
       if (pre!=NULL) cout<<pre->val<<" I am present \n";
       else cout<<"exploure\n";
         if (succ!=NULL) cout<<succ->val<<" I am present \n";
       else cout<<"exploure\n";
 return 0;

}