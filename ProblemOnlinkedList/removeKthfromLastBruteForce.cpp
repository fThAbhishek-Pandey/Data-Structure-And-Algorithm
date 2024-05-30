#include<iostream>
using namespace std; 
class node {
    public:
      int val;
      node* next;
      node(int data){
        val= data;
        next= NULL;
      }     
};
class LL {
    public:
        node*head;
        LL (){
            head=NULL;
        }
        void display (){
            node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp= temp->next;
            }cout<<endl;
        }
        void insert_end(int value){
            node* new_node= new node (value);
            if (head==NULL){
                head=new_node;
                new_node->next=NULL;
                return;
            }
            node* temp= head;
            while (temp->next!=NULL){
                temp=temp->next;
            }
            temp->next= new_node;
            new_node->next= NULL;
        }
};
int lastKthEle (node*& head,int k){
   int len=0;
   node* temp=head;
   while (temp!=NULL){
    temp=temp->next;
    len++;
   }
   temp=head;
   k%=len;
   k=len-k;
   if (k==len){// for head case 
   head=head->next;
   int removed =temp->val;
   free(temp);
    return removed;
   }
   while (k>1){
    temp=temp->next;
    k--;
   }
   node *del =temp->next;
   int removed= del->val;
    temp->next= temp->next->next;
    free(del);
   return removed;

}
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
        cout<<"enter the value of k : ";
        int k;
        cin>>k;
        cout<<"the last "<<k<<"th element is : "<<lastKthEle (ll.head,k) <<endl;
        ll.display();
        return 0;
}