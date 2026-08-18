// slow fast pointer approach

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

    // create a cycle by connecting tail->next to the node at 1-based position `pos`
    void createCycle(int pos){
        if(head == NULL || pos <= 0) return;
        Node* temp = head;
        int idx = 1;
        while(idx < pos && temp != NULL){
            temp = temp->next;
            idx++;
        }
        if(temp == NULL) return; // position out of range
        tail->next = temp;
    }

    bool hascycle(){
        Node* slow = head ;
        Node* fast = head ;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast){
                return true ;
            }
        }
        return false ;  
    }

    Node* ListCycle(){
        Node* slow = head ;
        Node* fast = head ;
        bool found = false ;

        while (fast == NULL && fast->next)
        {
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast){
                found =  true ;
                break;
            }
        }
        if(!found) return NULL ;

        slow = head ;
        while(slow != fast){
            slow = slow->next ;
            fast = fast->next ;
        }
        return slow ;
    }

    Node* RemoveListCycle(){
        Node* slow = head ;
        Node* fast = head ;
        bool found = false ;

        while (fast == NULL && fast->next)
        {
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast){
                found =  true ;
                break;
            }
        }
        if(!found) return NULL ;

        slow = head ;
        Node* prev = NULL ;
        while(slow != fast){
            slow = slow->next ;
            prev = fast ;
            fast = fast->next ;
        }

        prev->next = NULL ;
        return head ;
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
    List ll1;
    ll1.push_back(1);
    ll1.push_back(3);
    ll1.push_back(5);
    ll1.push_back(7);
    cout << "has cycle? " << ll1.hascycle() << endl ;
    ll1.print();

    // create a cycle: connect tail to node at position 2 (value 3)
    ll1.createCycle(2);
    cout << "has cycle after createCycle? " << ll1.hascycle() << endl ;
    Node* cycStart = ll1.ListCycle();
    if(cycStart) cout << "cycle starts at: " << cycStart->data << endl;

    // remove cycle and verify
    ll1.RemoveListCycle();
    cout << "has cycle after removal? " << ll1.hascycle() << endl ;
    ll1.print();
    return 0;
}