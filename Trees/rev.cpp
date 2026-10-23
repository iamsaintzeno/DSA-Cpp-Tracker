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


// vector<int> inorderTraversal(Node* node){
//     vector<int> ans ;
//     if(node==NULL) return ans ;
//     stack<Node*> s ;
//     Node* node = node ;
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
                 
// vector<int> postorderTraversal(Node* node){
//     vector<int> preorder ;
//     if(node==NULL) return preorder ;
//     Node* node = node ;
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

// vector<int> postorderTraversal(Node* node){
//     stack<Node*> s1 ;
//     stack<Node*> s2 ;
//     vector<int> ans ;
//     s1.push(node);
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


// vector<int> postorderTraversal(Node* node){
//     stack<Node*> s ;
//     vector<int> ans ;
//     Node* curr = node ;
//     s.push(node);
//     while(curr!= NULL || s.empty()){
//         if (curr!=NULL)
//         {
//             s.push(curr);
//             curr = curr->left ;
//         }
//         else {
//             Node* temp = s.top()->right ;
//             if (temp==NULL)
//             {
//                 temp = s.top();
//                 s.pop();
//                 ans.push_back(temp->data);
//                 while (!s.empty() && temp == s.top()->right)
//                 {
//                     temp = s.top();
//                     s.pop();
//                     ans.push_back(temp->data);
//                 }
                
//             }
//             else{
//                 curr = temp ;
//             }
            
//         }
        
//     }
//     return ans ;

// }

// inorder -- green 

// class Solution{
// 	public:
// 		vector<int> inorder(Node* node){
// 	        vector<int> ans ;
//             if(node==NULL) return ans ;
//             stack<Node*> s ;
//             while (true)
//             {
//                 if(node != NULL){
//                     s.push(node);
//                     node = node->left;
//                 }
//                 else{
//                     if(s.empty()) return ;
//                     node = s.top() ;
//                     s.pop();
//                     ans.push_back(node->data);
//                     node = node->right ;
//                 }

//             }
//             return ans ;
// 		}
// };

// preorder -- green 


// class Solution{
// 	public:
// 		vector<int> preorder(Node* node){
// 	        vector<int> ans ;
//             if(node==NULL) return ans ;
//             stack<Node*> s ;
//             while (true)
//             {
//                 if(node != NULL){
//                     s.push(node);
//                     ans.push_back(node->data);
//                     node = node->left;
//                 }
//                 else{
//                     if(s.empty()) return ;
//                     node = s.top() ;
//                     s.pop();
//                     node = node->right ;
//                 }

//             }
//             return ans ;
// 		}
// };


// postorder -- yellow 

// class Solution{
// 	public:
// 		vector<int> postorder(Node* root){
// 	        vector<int> ans ;
//             if(root==NULL) return ans ;
//             Node* node = root ;
//             stack<Node*> s1 ;
//             stack<Node*> s2 ;
//             s1.push(root);
//             while (!s1.empty())
//             {
//                 node = s1.top();
//                 s1.pop();
//                 s2.push(node);
                
//                 if(node->left){
//                     s1.push(node->left);
//                 }
//                 if(node->right){
//                     s1.push(node->right);
//                 }

//             }
//             while(!s2.empty()){
//                 ans.push_back(s2.top()->data);
//                 s2.pop();
//             }
//             return ans ;
// 		}
// };

// postorder -- single stack 

class Solution{
	public:
		vector<int> postorder(Node* root){
	        vector<int> ans ;
            if(root==NULL) return ans ;
            Node* curr = root ;
            stack<Node*> s ;
            while(curr!=NULL || !s.empty()){
                if(curr!=NULL){
                    s.push(curr);
                    curr = curr ->left ;
                }
                else{
                    Node* temp = s.top()->right ;
                    if(temp==NULL){
                        temp = s.top();
                        s.pop();
                        ans.push_back(temp->data);
                        while(!s.empty() && temp == s.top()->right){
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
};