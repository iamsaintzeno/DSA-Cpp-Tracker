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

    void insert(int val ,int idx){
        if(idx < 0) return ;
        if(idx==0) {
            push_front(val) ;
            return ;
        }

        // new node formation
        Node* newNode = new Node(val);

        // store address of LL
        Node* temp = head ;

        // update temp till idx-1 so that it will point just previous val of insertion position
        for (int i = 0; i < idx-1; i++)
        {
            if (temp == NULL)
            {
                cout << "INVALID Position" << endl;
                return ;
            }
            
            temp = temp-> next ;
        }

        // establish connection betn newNode and insertion Position (temp-> next point to insertion position)
        newNode-> next = temp-> next ;

        // establish connection betn prev position of insertion position and newNode
        temp-> next = newNode ;
        
    }

    int search(int val){
        Node* temp = head ;
        int idx = 0 ;
        while (temp != NULL)
        {
            if(temp->data==val) {
                return idx;
            }
            temp = temp-> next ;
            idx ++ ;
        }
        return -1 ;
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
    List ll ;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.insert(4,1); 
    cout << ll.search(2) << endl; 
    ll.print() ;
    return 0;
}