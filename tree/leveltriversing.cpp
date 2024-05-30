#include<iostream>
#include<queue>
using namespace std;
class node {
    public: 
        int val;
        node* left;
        node* right;
        node (int data){
            val= data;
            left= NULL;
            right = NULL;
        }
};
void leveltriversing (node* root){
    queue<node*> qu;
    qu.push(root);
    while (!qu.empty()){
        int level_size = qu.size();
        while (level_size--){
            node* currNode = qu.front();
            qu.pop();
            if (currNode->left!=NULL) qu.push(currNode->left);
            if (currNode->right!=NULL) qu.push (currNode->right);
            cout<<currNode->val<<" ";
        }
    }
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
   leveltriversing(root);
}