#include<iostream>
using namespace std;
class node {
    public: 
    int val;
    node* next ;
    node(int data){
        val= data;
        next= NULL;
    }
};
class LL {
    public:
    node* head;
    LL (){
        head = NULL;
    }
    void display (){
        node* temp =head;
        while (temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void insert_end (int value){
        node * new_node = new node (value);
        if (head ==NULL){
            head = new_node;
            new_node->next= NULL;
            return;
        }
        node* temp =head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= new_node;
        new_node->next=NULL;
        return;
    }
};
void removeKth (node*head,int k);

int main (){
    cout<<"enter the length of linked list : ";
    int n;
    cin>>n;
    cout<<"enter the element of linked list\n";
    LL ll;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        ll.insert_end(ele);
    }
    cout<<"enter the element of index : ";
    int k;
    cin>>k;
    removeKth (ll.head,k);

}