#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class node {
    public: 
    int val;
    node*left;
    node* right ;
    node (int data){
        val = data;
        left= NULL;
        right = NULL;
    }
};
vector<int > reverselevelprint (node* root){
    vector<int> ans;
    if (root==NULL) return ans;
    queue<node*> qu;
    qu.push(root);
    stack<int> st;
    while (!qu.empty()){
        int levelsize= qu.size();
        while (levelsize>0){
            node* currNode = qu.front();
            qu.pop();
           
            // if (currNode->left) qu.push(currNode->left);
            if (currNode->right) qu.push(currNode->right);
            if (currNode->left) qu.push(currNode->left);   
             st.push (currNode->val);
             levelsize--;
        }
    }
    int n=st.size();
    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main (){
    node* root = new node (5);
    root->left= new node (9);
    root->right = new node (7);
    root->left->left= new node (4);
    root->left->right= new node (1);
    root->right->right= new node (3);
    vector<int> ans= reverselevelprint( root);
    for (int i=0;i<ans.size ();i++){
        cout<< ans[i]<<" ";
    }
    /*
            5
        9       7
     4     1        3
    */
}