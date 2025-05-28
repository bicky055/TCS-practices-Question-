#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){
   // Create a temp Ndoe
   Node* temp = new Node(d);
  
   temp->next = head;
   head = temp;

}
void print(Node* &head){

  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }cout << endl;
}

void InsertAtTail(Node* &tail,int data){
  Node* temp =new Node(data);
  
  
  tail->next = temp;
  tail = tail->next;

}
void InsertAtMiddle(Node* &head, Node* &tail, int d, int pos){
  if(pos == 0){
    InsertAtHead(head, d);
    return;
  }
  Node* temp = head;
  int cnt = 0;
  while(cnt < pos - 1){
    temp = temp->next;
    cnt++;
  }
  Node* nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;

  if(temp->next == NULL){
    tail = nodeToInsert;
  }
}
int Search(Node* &head, int key){
  Node* temp = head;
  int cnt = 0;
  while(temp != NULL){
    if(temp->data == key){
      return cnt;
    }
    temp = temp->next;
    cnt++;
  }
  return -1; // Not found
}
void DeleteNode(Node* &head, int pos){
  if(pos == 0){
    Node* toDelete = head;
    head = head->next;
    delete toDelete;
    return;
  }
  Node* temp = head;
  int cnt = 0;
  while(cnt < pos - 1){
    temp = temp->next;
    cnt++;
  }
  Node* toDelete = temp->next;
  temp->next = temp->next->next;
  delete toDelete;
}
int Length(Node* &head){
  Node* temp = head;
  int cnt = 0;
  while(temp != NULL){
    cnt++;
    temp = temp->next;
  }
  return cnt;
}
int medile(Node* &head){
  Node* slow = head;
  Node* fast = head;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data; // Return the data of the middle node
}
void Reverse(Node* &head){
  Node* prev = NULL;
  Node* curr = head;
  Node* next = NULL;
  
  while(curr != NULL){
    next = curr->next; // Store the next node
    curr->next = prev; // Reverse the link
    prev = curr; // Move prev to current
    curr = next; // Move to the next node
  }
  head = prev; // Update head to the new first node
}
void checkcycle(Node* &head){
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next; // Move slow by 1 step
    fast = fast->next->next; // Move fast by 2 steps

    if(slow == fast){
      cout << "Cycle detected" << endl;
      return;
    }
  }
  cout << "No cycle detected" << endl;
}

int main(){
  // Create a Node
  Node* node1 = new Node(10);
 //cout << node1->data << endl;
  //cout << node1->next << endl;

  //print Node
  Node* head = node1;
  print(head);

  // InsertNodeAt Head
  InsertAtHead(head,12);
   print(head);
  InsertAtHead(head,15);
   print(head);
  InsertAtHead(head,64);
   print(head);
  // Insert AT Tail
  Node* tail = head;
  InsertAtTail(tail,47);
  print(tail);
  InsertAtTail(tail,45);
  print(tail);
}