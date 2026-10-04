// //inorder
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class TreeNode{
public :
    int val ;
    TreeNode* left ;
    TreeNode* right ;

    TreeNode(int val){
        val = val ;
        right = left = NULL ;
    }
};

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         TreeNode* node = root ;
//         vector<int> inorder ;
//         stack<TreeNode*> s ;
//         while (true)
//         {
//             if (node!=NULL)
//             {
//                 s.push(node);
//                 node = node->left ;
//             }
//             else{
//                 if(s.empty()) break;
//                 node = s.top() ;
//                 s.pop();
//                 inorder.push_back(node->val);
//                 node = node->right ;
//             }
            
//         }
//         return inorder ;
//     }
// };

// // preorder
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         stack<TreeNode*> s ;
//         vector<int> preorder ;
//         TreeNode* node = root ;
//         while (true)
//         {
//             if (node!=NULL)
//             {
//                 s.push(node);
//                 preorder.push_back(node->val);
//                 node = node->left ;
//             }
//             else{
//                 if(s.empty()) break ;
//                 node = s.top() ;
//                 s.pop() ;
//                 node = node->right ;
//             }
            
//         }
//         return preorder ;
        
//     }
// };

// postorder
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root){
//         vector<int> postorder ;
//         if(root==NULL) return postorder ;
//         stack<TreeNode*> s1,s2 ;
//         s1.push(root);
//         while (!s1.empty())
//         {
//             root = s1.top() ;
//             s1.pop() ;
//             s2.push(root);
//             if (root->left!=NULL)
//             {
//                 s1.push(root->left);
//             }
//             if(root->right!=NULL){
//                 s1.push(root->right);
//             }
            
//         }
//         while(!s2.empty()){
//             postorder.push_back(s2.top()->val);
//             s2.pop();
//         }
//         return postorder ;
//     }
// };

// postorder using 1 stack

// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root){
//         vector<int> postorder ;
//         stack<TreeNode*> s ;
//         TreeNode* curr = root ;
//         while (curr != NULL || !s.empty())
//         {
//             if (curr != NULL)
//             {
//                 s.push(curr);
//                 curr = curr->left;
//             }
//             else{
//                 TreeNode* temp = s.top()->right ;
//                 if (temp==NULL)
//                 {
//                     temp = s.top() ;
//                     s.pop();
//                     postorder.push_back(temp->val);
//                     while (!s.empty() && temp == s.top()->right)
//                     {
//                         temp = s.top() ;
//                         s.pop() ;
//                         postorder.push_back(temp->val);
//                     } 
//                 }
//                 else{
//                     curr = temp ;
//                 }
                
//             }
            
//         }
//         return postorder ;
//     }
// };