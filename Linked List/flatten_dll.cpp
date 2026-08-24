// child pointer

#include<iostream>
using namespace std;
                 
class Node {
public :
    int data ;
    Node* next ;
    Node* child ;

    Node (int val){
        data = val ;
        next = NULL ;
        child = NULL ;
    }
};

class FlattenList {
    Node* head ;
    Node* tail ;

public :
    FlattenList(){
        head = tail = NULL ;
    }

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode ;
        }
        else {
            newNode->next = head ;
            head = newNode ;
        }
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if (head==NULL)
        {
            head = tail = newNode ;
        }
        else{
            tail->next = newNode ;
            tail = newNode ;
        }
        
    }

    Node* flat_dll(Node* head){
        if(head == NULL) return NULL;
        
        Node* current = head;
        
        while(current != NULL){
            // If child exists, flatten the child list
            if(current->child != NULL){
                Node* nextNode = current->next;
                
                // Recursively flatten child
                current->next = flat_dll(current->child);
                
                // Find the last node in flattened child
                while(current->next!=NULL)
                {
                    current = current->next;
                }
                // Connect end of child to next node
                current->next = nextNode ;
                current->child = NULL;
            }
            
            current = current->next;
        }
        
        return head;
    }

    void printList(){
        Node* temp = head ;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }

    // Get node at position (0-indexed)
    Node* getNodeAtPos(int pos){
        Node* temp = head;
        int count = 0;
        while(temp != NULL && count < pos){
            temp = temp->next;
            count++;
        }
        return temp;
    }

    // Print structure with child pointers
    void printStructure(){
        Node* temp = head;
        cout << "\n=== Linked List Structure ===" << endl;
        while(temp != NULL){
            cout << temp->data;
            if(temp->child != NULL){
                cout << " -> child: ";
                Node* child = temp->child;
                while(child != NULL){
                    cout << child->data;
                    if(child->next != NULL) cout << " -> ";
                    child = child->next;
                }
            }
            cout << endl;
            temp = temp->next;
        }
        cout << "============================\n" << endl;
    }

    // Create test structure with child nodes
    void createTestStructure(){
        // Main list: 1 -> 2 -> 3
        insertAtTail(1);
        insertAtTail(2);
        insertAtTail(3);
        
        // Add child to node 1: 4
        Node* node1 = getNodeAtPos(0);
        if(node1 != NULL){
            node1->child = new Node(4);
        }
        
        // Add child to node 2: 5 -> 6
        Node* node2 = getNodeAtPos(1);
        if(node2 != NULL){
            node2->child = new Node(5);
            node2->child->next = new Node(6);
        }
    }

};

int main() {
    FlattenList fl;
    
    // Create test structure:
    //     1 -> 2 -> 3
    //     |    |
    //     4    5 -> 6
    
    fl.createTestStructure();
    
    cout << "BEFORE FLATTENING:" << endl;
    fl.printStructure();
    cout << "Main List (next pointers): ";
    fl.printList();
    
    // Flatten the list
    Node* flattenedHead = fl.getNodeAtPos(0);
    flattenedHead = fl.flat_dll(flattenedHead);
    
    cout << "\nAFTER FLATTENING:" << endl;
    cout << "Flattened List: ";
    fl.printList();
    
    return 0;
}