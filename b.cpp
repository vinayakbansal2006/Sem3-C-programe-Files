#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *start=NULL;
void screate(){
    node *newnode,*temp;
    int choice;
    do {
        newnode= new node;
        cout<< "enter data";
        cin >> newnode->data;
        newnode->next = NULL;
        if(start==NULL){
            start=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout << "do u want to continue";
        cin >> choice;

    }while(choice == 1);

}
void sinsatbeg(int data){
    node *newnode;
    newnode=new node;
    newnode->data=data;
    newnode->next=start;
    start=newnode;
}
void sinsatend(int data){
    node*newnode,*temp=start;
    newnode=new node;
    newnode->data=data;
    if (start == NULL) {
        start = newnode;
        newnode->next = NULL;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}
void sinsatbet(int data,int pos){
    node *newnode,*temp=start;
    newnode=new node;
    newnode->data=data;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void sdelatbeg(){
    node *temp;
    temp=start;
    start=start->next;
    delete temp;
}
void sdelatend(){
    node *temp=start,*ptr;
    while(temp->next!=NULL){
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    delete temp;
}
void sdelatbet(int pos){
    node *temp=start,*nextnode;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    delete nextnode;
}
void ssearch(int item){
    struct node *temp;
    temp=start;
    if(temp==NULL){
        cout << "empty list";
    }
    else{
        while(temp!=NULL){
            if(temp->data==item){
                cout << "item found";
                break;
            }
            temp=temp->next;
        }
    }
}
void sdisplay(){
    node *temp = start;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}


#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *start=NULL;
void create(){
    node *newnode,*temp;
    int choice;
    do {
        newnode= new node;
        cout<< "enter data";
        cin >> newnode->data;
        newnode->next = NULL;
        if(start==NULL){
            start=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout << "do u want to continue";
        cin >> choice;

    }while(choice == 1);

}
void insatbeg(int data){
    node *newnode;
    newnode=new node;
    newnode->data=data;
    newnode->next=start;
    start=newnode;
}
void insatend(int data){
    node*newnode,*temp=start;
    newnode=new node;
    newnode->data=data;
    if (start == NULL) {
        start = newnode;
        newnode->next = NULL;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
}
void insatbet(int data,int pos){
    node *newnode,*temp=start;
    newnode=new node;
    newnode->data=data;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void delatbeg(){
    node *temp;
    temp=start;
    start=start->next;
    delete temp;
}
void delatend(){
    node *temp=start,*ptr;
    while(temp->next!=NULL){
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    delete temp;
}
void delatbet(int pos){
    node *temp=start,*nextnode;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    delete nextnode;
}
void search(int item){
    struct node *temp;
    temp=start;
    if(temp==NULL){
        cout << "empty list";
    }
    else{
        while(temp!=NULL){
            if(temp->data==item){
                cout << "item found";
                break;
            }
            temp=temp->next;
        }
    }
}
void display(){
    node *temp = start;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node node;

node* create(){
    struct node *start=NULL,*temp=NULL,*newnode;
    int choice;
    do{
        newnode=new node;
        cout << "enter the data ";
        cin >> newnode->data;
        newnode->prev=NULL;
        newnode->next=NULL;
        if(start==NULL){
            start = newnode;
            temp = newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cout << "Do u want to continue (1/0) ";
        cin >> choice;
    }while(choice==1);
    return start;
}

void display(node* start) {
    node* temp = start;
    cout << "Doubly Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insatbeg(struct node **start,int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = *start;
    if(*start != NULL)
        (*start)->prev = newnode;
    *start = newnode;
}

void insatend(struct node **start,int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    if(*start == NULL){
        newnode->prev = NULL;
        *start = newnode;
        return;
    }
    node *temp = *start;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void insatbet(struct node **start,int data,int pos){
    if(*start == NULL) return;
    node *newnode = new node;
    newnode->data = data;
    node *temp = *start;
    int i=0;
    while(i<pos-1 && temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if(temp->next != NULL)
        temp->next->prev = newnode;
    temp->next = newnode;
}

void delatbeg(struct node **start){
    if(*start == NULL) return;
    node *temp = *start;
    *start = (*start)->next;
    if(*start != NULL)
        (*start)->prev = NULL;
    delete temp;
}

void delatend(struct node **start){
    if(*start == NULL) return;
    node *temp = *start;
    if(temp->next == NULL){
        *start = NULL;
        delete temp;
        return;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

void delatbet(struct node **start,int pos){
    if(*start == NULL) return;
    node *temp = *start;
    int i=1;
    while(i<pos-1 && temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    node *ptr = temp->next;
    if(ptr == NULL) return;
    temp->next = ptr->next;
    if(ptr->next != NULL)
        ptr->next->prev = temp;
    delete ptr;
}
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse the link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }
    return prev; // new head
}


int main(){
    node *start = create();

    insatbeg(&start, 100);
    insatend(&start, 200);
    insatbet(&start, 150, 2);


    display(start);
    return 0;
}   

