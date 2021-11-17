#include <iostream>
#include<list>
#include<algorithm>
using namespace std;

class node{
  public:
    int data;
    node* next;

    node(int val){
      data = val;
      next = NULL;
    }
};

void display(node* head){
  node* ptr= head;
  while(ptr != NULL){
    cout<< ptr->data << " ";
    ptr = ptr->next;
  }
}
void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
    head = n;
    return;
  }
  node* ptr = head;
  while(ptr->next != NULL){
    ptr = ptr->next;
  }
ptr->next = n;
}

node* middleOfLL(node* &head){
  node* slow = head;
  node* fast = head;

  while(fast->next != NULL && fast != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

int main() {
  node* head = NULL;
  insertAtEnd(head,1);
  insertAtEnd(head,2);
  insertAtEnd(head,3);
  insertAtEnd(head,4);
  insertAtEnd(head,5);
  insertAtEnd(head,6);
  insertAtEnd(head,7);
  display(head);
  cout << endl;
  node* delay = middleOfLL(head);
  cout << delay->data << endl;
  return 0;

} 