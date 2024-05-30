#include<iostream>
#include<stack>
using namespace std;
class node {
public : 
     int val ;
     node* left ;
     node * right;
     node (int data){
        val = data;
        left = NULL;
        right = NULL; 
     }
};
void postOrder (node * root){
    if (root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
 void inorderTraversal(node* root) {
     
     if (root==NULL) return ;
     stack<node*>st;
     st.push(root);
         while (!st.empty()&&root!=NULL&&(root->right!=NULL|| root->left != NULL)){
           
             node* currNode= st.top();
             st.pop();
         
              if (currNode->right) st.push(currNode->right);
             
             if (currNode->left){ st.push(currNode->left);}
             cout<<st.top()->val<<" "; 
            
                    
         }
              
      
     return ; 
    }
int main(){
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
  // postOrder (root);
  inorderTraversal(root);
}