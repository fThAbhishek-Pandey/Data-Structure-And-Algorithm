#include<iostream>
using namespace std;
class node {
public :
         int val;
         node* next;
         node (int data){
            val=data;
            next=nullptr;
         }
};
class LL {
public:
        node*head ;
        LL(){
            head= NULL;
        }
        void display (){
            node* temp=head;
            while (temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }cout<<endl;
            return;
        }
        void insert_end (int value){
            node* new_node = new node (value);
            if (head ==NULL){
                head=new_node;
                new_node-> next =NULL;
            }
            node* temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next= new_node;
            new_node->next= NULL;
        }
};
int getLen (node*head){
    int len=0;
    node*temp=head;
    while (temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
bool isEqual(node*head1,node*head2){
    int len1=getLen(head1);
    int len2= getLen(head2);
    if (len1!=len2) return false;
    node* temp1 =head1;
    node* temp2= head2;
    while (temp1&&temp2){
        if (temp1->val!=temp2->val) return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
int main (){
  cout<<"enter the size of first linked list : ";
  int n;
  cin>>n;
  cout<<"enter the element of first linked list \n";
  LL ll1;
  for (int i=0;i<n;i++){
    int ele;
    cin>>ele;
    ll1.insert_end(ele);
  }
   cout<<"enter the size of second linked list : ";
  int m;
  cin>>m;
  cout<<"enter the element of second linked list \n";
  LL ll2;
  for (int i=0;i<m;i++){
    int ele;
    cin>>ele;
    ll2.insert_end(ele);
  }
  if (isEqual(ll1.head,ll2.head )) cout<<" this is equal \n";
  else cout <<"the above linked list is not equal\n";
}