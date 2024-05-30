#include<iostream>
#include<vector> 
using namespace std; 
class node {
    public: 
            int val;
            vector<node*> child;
            node(int data){
                val= data;
            }
};
void display (node* root ){
     if (root==NULL) return ;
     cout<<root->val<<" ";
     for (int i=0;i<root->child.size();i++){
        display(root->child[i]);
     }

}
int main(){
    node* root= new node (4);
    root->child.push_back(new node(1));
    root->child.push_back (new node (3));
    display (root);
    return 0;
}