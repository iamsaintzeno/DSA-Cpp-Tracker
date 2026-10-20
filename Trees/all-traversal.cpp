#include<iostream>
#include<vector>
#include<stack>
using namespace std;


//  Definition for a binary tree node.
 struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
     TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};
 
class Solution{
	public:
		vector<vector<int>> treeTraversal(TreeNode* root){
			vector<vector<int>> ans ;
            stack<pair<TreeNode*,int>> s ;
            if(root==NULL) return ans;
            s.push({root,1});
            vector<int> pre , in , post ;
            while (!s.empty())
            {
                auto t = s.top() ;
                s.pop() ;

                if(t.second == 1){
                    pre.push_back(t.first->data);
                    t.second++;
                    s.push(t);

                    if(t.first->left!=NULL){
                        s.push({t.first->left,1});
                    }
                }

                else if(t.second == 2){
                    in.push_back(t.first->data);
                    t.second++;
                    s.push(t);

                    if(t.first->right!=NULL){
                        s.push({t.first->right,1});
                    }
                }

                else {
                    post.push_back(t.first->data);
                }
            }

            ans.push_back(pre);
            ans.push_back(in);
            ans.push_back(post);

            return ans ;
            
		}
};