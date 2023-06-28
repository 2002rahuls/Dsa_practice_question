#include<bits/stdc++.h>
using namespace std;


class Node{ 
 public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }    
};

void insertattail(Node* &tail,int d){
    Node* temp1=new Node(d);
    tail->next=temp1;
    tail=temp1;
}

void InsertAtHead(Node* &head,int d){

//create new node
Node* temp1=new Node(d);
temp1->next =   head;
head=temp1;
}
void printl(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp -> data<<"-----> ";
        temp=temp -> next;
    }
    cout<<endl;
}


int main(){
//new node created
Node* node1=new Node(20);
// cout<<node1-> data<<endl;
// cout<<node1->next<<endl;
//head pointed to node1     
Node* head=node1;
Node* tail=node1;

printl(head);
cout<<"after insertion"<<endl;
InsertAtHead(head,12);
printl(head);
InsertAtHead(head,15);
printl(head);

insertattail(tail,99);
printl(head);




    return 0;
}