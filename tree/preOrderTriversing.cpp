#include<iostream>
using namespace std;
class node {
public :
       int val ;
       node* left;
       node* right;
       node (int data){
        val=data;
        right =NULL;
        left = NULL;
       }

};
 void preorderTrivesing (node* rootNode){
     if (rootNode==NULL) return;// base case
     cout<< rootNode->val<<" ";//<<endl<<" "; 
     preorderTrivesing(rootNode->left);
     //cout<<" ";
     preorderTrivesing(rootNode->right);
     //cout<<" ";
 }
 void inOrderTriversing (node* rootNode){
    if (rootNode) return ;
    inOrderTriversing(rootNode->left);
    cout<<rootNode->val<<" ";
    inOrderTriversing(rootNode->right);
    return;
 }
 void postOrderTriversing (node* rootNode){
    if (rootNode) return;
    postOrderTriversing(rootNode->left);
    postOrderTriversing(rootNode->right);
    cout<<rootNode->val<<" ";
 }
 void reversePreOrder (node* rootNode){
    if (rootNode) return;
    cout<<rootNode->val<<" ";
    reversePreOrder(rootNode->right);
    reversePreOrder(rootNode->left);
    return;
 }
 void reverseInOrder (node* root){
    if (root) return;
    reverseInOrder (root->right);
    cout<<root->val<<" ";
    reverseInOrder(root->left);
    return;
 }
 void reversePostOrder (node* root){
    if (root) return;
    reversePostOrder (root->right);
    reversePostOrder (root->left);
    cout<<root->val<<" ";
    return;
 }
 int main (){
    node* root = new node (10);
    root->left= new node (8);
    root->left->left= new node (7);
    root->left->right= new node (9);
    root->right= new node (4);
    root->right->left = new node (5);
    root->right->right = new node (6);
    cout<<"\npreOrder triversing \n";
    preorderTrivesing (root);
    cout<<"\nInOrder triversing \n";
    inOrderTriversing(root);
    cout<<"\nPostOrder triversing \n";
    postOrderTriversing(root);
    cout<<"\nreverse preOrder triversing \n";
    reversePreOrder(root);
    cout<<"\n reverse inOrder triversing \n";
    reverseInOrder(root);
    cout<<"\nreverse PostOrder triversing \n";
    reversePostOrder(root);
    return 0;
 }