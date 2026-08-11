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
public :
    Node* head ;
    Node* tail ;

public :
    List(){
        head = tail = NULL ;
    }
    
    Node* merge(Node* h1 , Node* h2){
        if(h1==NULL) return h2 ;
        if(h2==NULL) return h1 ;

        if(h1->data<h2->data){
            h1->next = merge(h1->next,h2);
            return h1 ;
        }
        else{
            h2->next = merge(h1,h2->next) ;
            return h2 ;
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

    void print(){
        Node* temp = head ;
        while (temp != NULL)
        {
            cout << temp-> data << " " ;
            temp = temp-> next ;
        }
        cout << "->NULL" << endl ;
        
    }
};
                 
int main() {
    List ll1 , ll2 ;
    ll1.push_back(1);
    ll1.push_back(3);
    ll1.push_back(5);
    ll2.push_back(2);
    ll2.push_back(3);
    ll2.push_back(6);
    ll1.merge(ll1.head , ll2.head);
    ll1.print();
    return 0;
}