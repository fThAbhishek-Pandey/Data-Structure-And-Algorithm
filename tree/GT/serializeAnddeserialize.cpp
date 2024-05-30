#include<iostream>
#include<vector> 
#include<unordered_map>
#include<string>
using namespace std;
class node {
    public: 
          int val;
          vector<node*>child;
          node(int data){
            val=data;
            for (int i=0;i<child.size();i++){
                child[i]=NULL;
            }
          }
};
void display (node* root){
    if (root== NULL) return ;
    cout<<root->val<<" ";
    for (int i=0;i<root->child.size();i++){
        display (root->child[i]);
    } 
}
void serializeTree (node* root, string &ans){
  if (root==NULL) return ;
  ans+= to_string (root->val)+ ":"+ to_string(root->child.size()) +":";
  for (node* childi: root->child){
          ans+= to_string (childi->val) + ",";
  }
  ans.pop_back();
  ans+="\n";
  for (node* childi: root->child){
         serializeTree(childi,ans);

  }
}
 node* deserializedHelper(int rootNodeVal,unordered_map <int,string> mp){
       node* nodedost = new node (rootNodeVal);
       string nodestr= mp[rootNodeVal];
       if (nodestr[0]=='0') return nodedost;
       int breackpos = nodestr.find('0');
       int childNodeNum = stoi (nodestr.substr(0,breackpos));
       string childNodestr= nodestr.substr(breackpos);
       int start=0;
        for (int i=0;i<childNodeNum;i++){
            int end = childNodestr.find(',',start);
            if (end==string::npos) end = childNodestr.size();
               int childNodeNum= stoi (childNodestr.substr(start,end));
              nodedost->child.push_back(deserializedHelper(childNodeNum,mp));
              start= end+1;
        }
        return nodedost;
 }
node* deserialized (string serialized){
       if (serialized=="") return NULL;
       unordered_map <int ,string >mp;
       int start=0;
       for (int i=0; i<serialized.size();i++){
           if(serialized[i]=='\n'){
                string nodestr= serialized.substr(start,i-start);
                int breakpos1= nodestr.find(':',i-start);
                int node_val= stoi(nodestr.substr(0,breakpos1));
                mp[node_val]= nodestr.substr(breakpos1);
                start= i+1;
           }
       }
       int rootNodeVal= stoi(serialized.substr(0,serialized.find(':')));
       return deserializedHelper(rootNodeVal,mp);
}
int main(){
    node* root= new node(6);
    root->child.push_back(new node( 8));
     root->child.push_back (new node (7));
     root->child[0]->child.push_back(new node (1));
     root->child[0]->child.push_back(new node (9));
      root->child[0]->child.push_back(new node (3));
      root->child[1]->child.push_back(new node (2));
        root->child[1]->child.push_back(new node (6));
        root->child[1]->child.push_back(new node (4));
         cout<<root->val<<" ";
display (root);
       string ans="";
       serializeTree(root,ans);
       cout<<ans<<endl;
       display (root);
       cout<<"A2K"<<endl;
       display(deserialized(ans));
/*
       8
    7      1
1   9  3    2  6  4   
*/
}
