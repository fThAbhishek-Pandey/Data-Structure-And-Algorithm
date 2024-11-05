#include <iostream>
using namespace std;
class node {
public :
   int val;
   node* next;
   node (int data){
     val = data;
     next =NULL;
   }
};
class linkedlist {
  public:
       node *head ;
       linkedlist (){
         head = NULL;
       }
      void insert_tail (int value){
        node* new_node = new node (value);
        if (head ==NULL){
          head = new_node;
          return;         
        }
        node * temp = head ;
        while (temp->next==NULL)
          {
            temp =temp->next;
          }
      
        temp->next =new_node;
      }
        void display (){
          node * temp =head;
          while (temp!=NULL){
            cout<<temp->val;
            temp = temp->next;
          }
          cout<<endl;
          return;
        }
};
void delete_repeated_ele (node* head){
  node* curr_node = head;
  while (curr_node!=NULL){
    while (curr_node->val ==curr_node->next->val&&curr_node ->next!=NULL)
      {
        node * temp = curr_node ->next;
        curr_node->next =curr_node->next->next;
        free(temp);
      }
    curr_node = curr_node->next->next;
  }
  return;
}

int main() {
  cout << "Hello World!\n";
  linkedlist ll;
  for (int i=0;i<9;i++){
    ll.insert_tail (i);
  }
  ll.display ();
  delete_repeated_ele (ll.head);
  ll.display ();
  cout<<"good\n";
  return 0;
}