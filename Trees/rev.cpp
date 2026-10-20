// inorder -- Green 

#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

struct Node
{
    int data ;
    Node* left ;
    Node* right ;

    Node(int val){
        data = val ;
        left = right = NULL ;
    }
};


// vector<int> inorderTraversal(Node* root){
//     vector<int> ans ;
//     if(root==NULL) return ans ;
//     stack<Node*> s ;
//     Node* node = root ;
//     while (true)
//     {
//         if (node!= NULL)
//         {
//             s.push(node);
//             node = node->left ;
//         }
//         else{
//             if(s.empty()) break ;
//             node = s.top();
//             s.pop();
//             ans.push_back(node->data);
//             node = node->right ;
//         }
        
//     }
//     return ans ;
// }

// preorder -- greeen 
                 
// vector<int> postorderTraversal(Node* root){
//     vector<int> preorder ;
//     if(root==NULL) return preorder ;
//     Node* node = root ;
//     stack<Node*> s ;
//     while(true){
//         if(node!=NULL){
//             s.push(node);
//             preorder.push_back(node->data);
//             node = node->left ;
//         }
//         else{
//             if(s.empty()) break ;
//             node = s.top() ;
//             s.pop() ;
//             node = node->right ;
//         }
//     }
//     return preorder ;
// }

// postOrder -- yellow 
// 2 stack 

// vector<int> postorderTraversal(Node* root){
//     stack<Node*> s1 ;
//     stack<Node*> s2 ;
//     vector<int> ans ;
//     s1.push(root);
//     while(!s1.empty()){
//         Node* node = s1.top();
//         s1.pop();
//         s2.push(node);
//         if(node->left!=NULL) s1.push(node->left);
//         if(node->right!=NULL) s1.push(node->right);
//     }
//     while(!s2.empty()){
//         ans.push_back(s2.top()->data);
//         s2.pop();
//     }
//     return ans ;
// }


vector<int> postorderTraversal(Node* root){
    stack<Node*> s ;
    vector<int> ans ;
    Node* curr = root ;
    s.push(root);
    while(curr!= NULL || s.empty()){
        if (curr!=NULL)
        {
            s.push(curr);
            curr = curr->left ;
        }
        else {
            Node* temp = s.top()->right ;
            if (temp==NULL)
            {
                temp = s.top();
                s.pop();
                ans.push_back(temp->data);
                while (!s.empty() && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->data);
                }
                
            }
            else{
                curr = temp ;
            }
            
        }
        
    }
    return ans ;

}