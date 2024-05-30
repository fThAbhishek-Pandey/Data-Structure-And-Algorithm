#include<iostream> 
using namespace std;
class node {
    public: 
    int val;
    node* left;
    node * right ;
    node (int data) {
        val=data;
        left = NULL; 
        right = NULL;
    }
};
 int countNode (node*& root){
   if (root==NULL) {cout<<"I am NULL\n";
    return 0;
    }
    if (root->right ==NULL) {
        cout<<"right Null\n" ;
        return 1;
        }
    if (root->left==NULL) {
        cout<<"left NULL\n";
        return 1;
        }
    int countleftNode = countNode (root->left);
    int countRightNode = countNode (root->right);
    return max(countleftNode,countRightNode)+ 1;
 }
int main (){
       node *root= new node(9);
       root->left = new node (7);
       root->right = new node (3);
       root->left->left= new node (1);
       root ->left->right = new node (4);
       root->right ->right = new node(11);
       root->right ->right->left= new node (23);
       root ->right->left->left = new node (34);
       cout<<"the three depth is : ";
       cout<<countNode (root)<<endl;
       /*
            5
    7              3
3       4              11 
       */
}