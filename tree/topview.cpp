#include<iostream> 
#include<vector>
#include<queue>
#include<map>
using namespace std;
class node {
    public: 
    int val;
    node* right ;
    node* left;
    node (int data) {
        val= data;
        right = NULL;
        left= NULL;
    }
};
vector <int> topview (node* root){
    vector<int> ans ;
    if (root==NULL) return ans;
    queue<pair<node*,int>> qu;
    qu.push (make_pair(root,0));
    map<int,int> m;
    while (!qu.empty()){
        int colsize =qu.size ();
        while (colsize--){
            pair<node*,int> p= qu.front();
            node* currNode = p.first;
            int currCol = p.second;
            qu.pop();
            if (m.find(currCol)==m.end()){
                m[currCol]= currNode->val;

            }
            if (currNode->left) qu.push(make_pair (currNode->left,currCol-1));
            if (currNode->right) qu.push(make_pair(currNode->right,currCol+1));
        }
    }
    for (auto ele: m){
        ans.push_back(ele.second);
    }
    return ans;
}
int main (){
    node* root= new node (7);
    root->left= new node (5);
    root->right= new node (8);
    root->left ->left = new node (3);
    root->left ->right = new node (9);
    root ->right ->left= new node (5);
    root ->right->right= new node (4);
    vector <int> ans= topview (root);
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    string str= "a";
    cout<<"am : "<<str.substr(0,1);
    /*
            7
        5       8
    3     9  5       4 
    */
}