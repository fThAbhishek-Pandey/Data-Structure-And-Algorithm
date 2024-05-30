#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
    public: 
      int val;
      node* left;
      node* right;
      node (int data){
            val= data;
            left= NULL;
            right= NULL;
      }
};
vector<int> topright (node* root){
   vector<int> ans;
    if (root== NULL) return ans;
    queue<node*> qu;
    qu.push(root);
    while (!qu.empty()){
        int levelsize= qu.size();
        while (levelsize>0){
          node* currNode = qu.front();
          qu.pop();
          if (levelsize==1) 
          ans.push_back (currNode->val);
         if (currNode->left) qu.push (currNode->left);
          if (currNode->right) qu.push (currNode->right);
          levelsize--;
        }
    }
    return ans;
}
int main (){
       node *root= new node(9);
       root->left = new node (7);
       root->right = new node (3);
       root->left->left= new node (1);
       root ->left->right = new node (4);
       root->right ->right = new node(11);
       root->right ->left= new node (23);
        root ->left->right->right= new node (68);
       cout<<"the top right view element  is : ";
       vector<int>  ans= topright (root);
       for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
       }
       /*
         9
    7         3
  1    4     23     11
         68
       */
}