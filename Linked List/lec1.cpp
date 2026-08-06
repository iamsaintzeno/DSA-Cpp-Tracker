// Linked List From Scratch

#include<iostream>
using namespace std;

class Node {
public :
    int data ;
    Node* next ;  // Node* Memory Adress of Object of Node Class 

    Node(int val){
        data = val ;
        next = NULL ;
    }

};

class List {
    Node* head ;
    Node* tail ;

public :
    List(){
        head = tail = NULL ;
    }

    void push_front(int val){
        Node* newNode = new Node(val); // Dynamic 
        // Node newNode(val) ; // Static 
        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        else {
            newNode-> next = head ;  //(*newNode).next = head
            head = newNode ;
        }
        
    }

    void push_back(int val){
        Node* newNode =new Node(val) ;
        if (head == NULL)
        {
            head = tail = newNode ;
            return ;
        }
        else{
            tail-> next = newNode ;
            tail = newNode ;
        }
    }

    void pop_front(){
        if(head == NULL){
            return ;
        }
        Node* temp = head ;
        head = head-> next ;

        delete tail ;

        if(head == NULL){
            tail = NULL ;
        }
    }

    void pop_back(){
        if (head == NULL)
        {
            return ;
        }

        Node* temp = head ;
        while (temp-> next != tail)
        {
            temp = temp-> next ;
        }

        delete tail ;

        temp-> next = NULL ;

        tail = temp ;
        
        
    }

    void print(){
        Node* temp = head ;
        while (temp != NULL)
        {
            cout << temp-> data << " " ;
            temp = temp-> next ;
        }
        
    }
};

int main() {
    List ll ;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.pop_back();  
    ll.print() ;
    return 0;
}