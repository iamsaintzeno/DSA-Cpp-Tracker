#include<iostream>
using namespace std;

class Node {
public :
    int data ;
    Node* next ;
    Node* prev ;

    Node(int val){
        data = val ;
        next = prev = NULL;
    }

};

class doubly_ll {
    Node* head ;
    Node* tail ;

public : 
    doubly_ll(){
        head = tail = NULL ;
    }

    void push_front(int val){
        Node* newNode = new Node(val) ;
        if (head == NULL)
        {
            head = tail = newNode ;
        }
        else{
            newNode->next = head ;
            head->prev = newNode ;
            head = newNode ;
        }
        
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode ;
        }
        else {
            tail->next = newNode ;
            newNode->prev = tail ;
            tail = newNode ;
        }
    }

    void pop_front(){
        Node* temp = head ;
        head = head->next ;
        if(head == NULL) return ;
        if(head!=NULL) head->prev = NULL ;

        temp->next = NULL ;
        delete temp ;
    }

    void pop_back(){
        if(head==NULL) return ;
        if(head == tail){
            delete head ;
            head = tail = NULL ;
        }

        Node* temp = tail ;
        tail = tail->prev ;
        tail->next = NULL ;
        temp->prev = NULL ;
        delete temp ;

    }

    void print(){
        Node* temp = head ;
        while (temp != NULL)
        {
            cout << temp->data << " " ;
            temp = temp->next ;
        }
        cout << "<=>NULL" ;
        
    }
} ;
                 
int main() {
    doubly_ll dll ;
    dll.push_back(1);   
    dll.push_back(2);
    dll.push_back(3);
    dll.pop_back();
    dll.print() ;   
    return 0;
}