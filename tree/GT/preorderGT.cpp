#include<iostream>
#include<vector>
#include<queue> 
using namespace std;
class node {
    public: 
        int val;
        vector<node*> child;
        node(int data){
            val= data;
            for (int i=0;i<child.size();i++){
                child[i]=NULL;
            }
        }
};
void preOrder(node* root){
    if (root==NULL) return;
    cout<<root->val<<" ";
    for(int i=0;i<root->child.size();i++){
        preOrder (root->child[i]);
    }
}
void postOrder(node* root){
    if (root==NULL) return;
   
    for(int i=0;i<root->child.size();i++){
       postOrder (root->child[i]);
    }
     cout<<root->val<<" ";
}
void inOrder (node* root){
    if (root==NULL) return;
    for (int i=0;i<root->child.size()/2;i++){
        inOrder(root->child[i]);
    }
    cout<<root->val<<" ";
    for (int i=root->child.size()/2;i<root->child.size();i++){
        inOrder(root->child[i]);
    }
}
void levelOrder (node* root){
    if (root==NULL) return;
    queue<node*> qu;
    qu.push(root);
    while (!qu.empty()) {
        int levelsize= qu.size();
        while (levelsize--){
            node* currNode= qu.front ();
            qu.pop();
            cout<<currNode->val<<" ";
            for (int i=0;i<currNode->child.size();i++){
                qu.push(currNode->child[i]);
            }
        }
    }

}
int main (){
    node* root= new node (5);
    root->child.push_back(new node (8));
    root->child.push_back(new node (9));
    root->child.push_back(new node(7));
    root->child[0]->child.push_back(new node (3));
    root->child[1]->child.push_back(new node (4));
    root->child[2]->child.push_back(new node(2));
    cout<<"PreOrder\n";
    preOrder (root);
    cout<<"\npostOrder\n";
    postOrder(root);
    cout<<"\ninOrder\n";
    inOrder(root);
    cout<<"\nlevelOrder\n"<<endl;
    levelOrder (root);
}
/*
      5
8      9   7
3       4   2 
  */