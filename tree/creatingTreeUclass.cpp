#include<iostream>
using namespace std;
class node {
    public: 
          int val;
          node* left;
          node*right;
          node (int data){
            val= data;
            left=NULL;
            right = NULL;
          }
};
// class tree {
//     public: 
// };
int main(){
          node * root = new node(6);
           root->left= new node (3);
           root->right= new node (9);
           cout<<"root : " <<root->val<<" "<<endl;
           cout<<"root left  : " <<root->left->val<<" "<<endl;
           cout<<"root right : " <<root->right->val<<" "<<endl;
           return 0;
}