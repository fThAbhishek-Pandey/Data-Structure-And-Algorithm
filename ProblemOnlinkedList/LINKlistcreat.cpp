#include<iostream>
using namespace std;
 class node {
public :
       int val;
       node* next;
       node (int data){//custrucer
         val=data;
         next= NULL;
       }

 };
 class ll {
    public:
    node* head;
    ll(){
        head=NULL;
    }
    //ENSER AT END 
    void insert (int data){
            node* new_node = new node (data);
            if (head ==NULL){
                head= new_node;
               new_node->next = NULL;
                return;
            }
            node* temp=head;
            while (temp->next!=NULL){
                temp= temp->next;
            }
            temp->next= new_node;
            new_node->next= nullptr;
            return;
    }
    void display (){
        node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }
     void display_ (){
        node* temp = head;
        while (temp!=NULL){
            cout<<temp->next<<" ";
            temp = temp->next;
        }cout<<endl;
    }
 };
 int main (){
    ll ram;
    cout<<"enter the size of linked list : ";
    int n;
    cin>>n;
    cout<<"enter ll ele \n";
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        ram.insert(ele);
    }
    cout<<" your ll is\n";
    ram.display ();
    // ram.display_ ();
 }
