#include<iostream>
using namespace std;
class node {
    public: 
    int val;
    node*next;
    node(int data){
       val=data;
       next=NULL;
    }
};
class LL{
    public:
    node* head;
    LL (){
        head=NULL;
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
       if (head==NULL){
         head=new_node;
         new_node->next= NULL;
       }
       node* temp =head;
       while (temp->next!=NULL){
          temp= temp->next;
       }
       temp->next=new_node;
       new_node->next=NULL;
       return;
    }
};
int getlen(node*head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len++;
    }
    return len;
}
bool isintersect(node*head1,node*head2){
       int len1= getlen (head1);
       int len2= getlen (head2);
       if (len1>len2){
        int k= len1-len2;
        while (k>0){
            head1=head1->next;
            k--;
        }
       }
       else if (len1<len2){
        int k= len2-len1;
        while (k>0){
            head2=head2->next;
            k--;
        }
       } 
       while(head1&&head2){
           if (head1==head2) return true;
            head2=head2->next;
            head1=head1->next;
       }
       return false;

}
int main (){
    cout<<"enter the size of fist linked list : ";
    int n;
    cin>>n;
    cout<<"enter the element of first link list\n";
    LL ll1;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        ll1.insert_end(ele);
    }
    cout<<"enter the size of second  linked list : ";
    int m;
    cin>>m;
    cout<<"enter the element of second link list\n";
    LL ll2;
    for (int i=0;i<m;i++){
        int ele;
        cin>>ele;
        ll2.insert_end(ele);
    }
    ll1.display();
    ll2.display();
    node *temp1 =ll1.head;
    node *temp2 =ll2.head;
    while (temp1->next->next->next->next!=NULL){
        temp1= temp1->next;
    }
    while (temp2->next!=NULL){
        temp2= temp2->next;
    }
    temp2->next=temp1;
    ll1.display();
    ll2.display();
    if (isintersect(ll1.head,ll2.head)) cout<<"above linked list  is intersect to each other\n";
}