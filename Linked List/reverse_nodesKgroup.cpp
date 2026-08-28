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

    Node* reverseNodes(Node* head , int k){
        Node* temp = head ;
        int count = 0 ;
        while (count<k)
        {
            if (temp == NULL)
            {
                return head ;
            }
            temp = temp->next;
            count++;
        }
        Node* prevNode = reverseNodes(temp,k);
        temp = head ;
        count = 0 ;
        while (count<k)
        {
            Node* next = temp->next ;
            temp->next = prevNode ;
            prevNode = temp ;
            temp = next ;
            count++;
        }
        return prevNode ;
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
    List ll ;
    ll.push_back(1) ;
    ll.push_back(2) ;
    ll.push_back(3) ;
    ll.push_back(4) ;
    ll.push_back(5) ;
    ll.print() ;
    ll.head = ll.reverseNodes(ll.head,2) ;
    ll.print() ;   
    return 0;
}