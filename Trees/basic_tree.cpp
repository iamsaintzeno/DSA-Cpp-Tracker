// create tree using cpp
#include<iostream>
using namespace std;

class Node{
public :
    int data ;
    Node* left ;
    Node* right ;

    Node(int val){
        data = val ;
        right = left = NULL ;
    }
};

class tree{
    Node* root ;
public :
    tree(){
        root = NULL ;
    }

    void create_root(int val){
        if (root==NULL)
        {
            root = new Node(val);
            return ;
        }   
    }

    Node* get_root(){
        return root ;
    }

    void push_left(Node* parent , int val){
        if (parent==NULL || parent->left!=NULL)
        {
            return ;
        }
        parent->left = new Node(val) ;
    }
    void push_right(Node* parent , int val){
        if (parent==NULL || parent->right!=NULL)
        {
            return ;
        }
        parent->right = new Node(val) ;
    }

};
                 
int main() {
    tree t ;
    t.create_root(5) ;
    Node* r = t.get_root() ;
    t.push_left(r,6); 
    t.push_right(r,7);
    t.push_left(r->left,8) ;     
    return 0;
}