#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
        int val;
        node* left;
        node* right;
        node(int data){
            val= data;
            left= NULL;
            right = NULL;
        }
};
class BST {
   public:
       node* root;
       BST (){
        root=NULL;
       }
       void insert (int data){
        node* new_node= new node (data);
         if (root==NULL){
            root=new_node;
            return;
         }
         node* temp= root;
         while (true){
            if (root->val>data){
                if (temp->left==NULL){
                temp->left= new_node;
                return;
                }
              temp=temp->left;
            }
            else {
                if (temp->right==NULL){
                    temp->right= new_node;
                    return;
                }
                temp=temp->left;
            }
         }
       }

};
    node * arrToBST (vector<int> v,int start,int end){
                if (start>end) return NULL;
                int mid = start+ (end-start)/2;
                node* root= new node (v[mid]);
                root->left= arrToBST (v,start,mid-1);
                root->right= arrToBST (v,mid+1,end);
                return root;
    }
 void display (node* root){
    if (root==NULL) return;
        display (root->left);
        cout<<root->val<<" ";
        display (root->right);
 }
int main (){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    vector<int> vec;
    cout<<"enter the element of vector : ";
     for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
     }  
     BST bst;
     bst.root = arrToBST (vec,0,n-1);
     display (bst.root);

}