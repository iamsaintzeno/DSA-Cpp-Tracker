// middle of Linked List

// bruitforce
// #include<iostream>
// using namespace std;

// class Node {
// public :
//     int data ;
//     Node* next ;  // Node* Memory Adress of Object of Node Class 

//     Node(int val){
//         data = val ;
//         next = NULL ;
//     }

// };

// class List {
//     Node* head ;
//     Node* tail ;

// public :
//     List(){
//         head = tail = NULL ;
//     }

//     int middle_ll(){
//         Node* temp = head ;
//         if(head==NULL) return -1 ;
//         int size = 0 ;
//         while (temp!=NULL)
//         {
//             size++;
//             temp = temp->next ;
//         }
//         Node* trav = head ;
//         for (int i = 1; i < (size/2)+1 ; i++)
//         {
//             trav = trav-> next ;
//         }
//         return trav->data ;
        
        
//     }

//     void push_back(int val){
//         Node* newNode =new Node(val) ;
//         if (head == NULL)
//         {
//             head = tail = newNode ;
//             return ;
//         }
//         else{
//             tail-> next = newNode ;
//             tail = newNode ;
//         }
//     }

//     void print(){
//         Node* temp = head ;
//         while (temp != NULL)
//         {
//             cout << temp-> data << " " ;
//             temp = temp-> next ;
//         }
//         cout << "->NULL" << endl ;
        
//     }
// };
                 
// int main() {
//     List ll ;
//     ll.push_back(1);
//     ll.push_back(2);
//     ll.push_back(3);
//     ll.print();
//     cout << ll.middle_ll() ;       
//     return 0;
// }

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
    Node* head ;
    Node* tail ;

public :
    List(){
        head = tail = NULL ;
    }

    int middle_ll(){ 
        Node* slow = head ;
        Node* fast = head ;

        while (fast!= NULL && fast->next != NULL)
        {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow->data ;
        
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
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.print();
    cout << ll.middle_ll() ;       
    return 0;
}