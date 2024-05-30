#include<iostream>
#include<vector> 
using namespace std;
class node {
    public:
        int val;
        vector<node*> child;
        node(int data){
            val=data;
            for(int i=0;i<child.size();i++){
                child.push_back(NULL);
            }
     }
};
void display (node* root){
    if (root==NULL) return;
    cout<<root->val<<" ";
    for(int i=0;i<root->child.size();i++){
        display (root->child[i]);
    }
}
void justGreater (node* root,int x,node*& ans){
    if (root==NULL) return;
    if (root->val>x&&(root->val<ans->val|| ans==NULL)){
        ans= root;
    }
    for (node* newchild : root->child){
        justGreater(newchild,x,ans);
    }
}
int main (){
    node* root= new node (20);
    root->child.push_back(new node (8));
    root->child.push_back(new node (22));
    root->child[0]->child.push_back(new node(4));
    root->child[0]->child.push_back(new node (12));
    root->child[0]->child[0]->child.push_back(new node (10));
    root->child[0]->child[1]->child.push_back(new node (17));
    root->child[1]->child.push_back(new node (4));
    root->child[1]->child.push_back(new node(2));   
    display (root); 
    node* ans =NULL;
    justGreater(root,10,ans);
    if (ans==NULL) cout<<"the element is absent \n";
    else cout<<"the element is present : ";//<<ans->val<<endl;       
}