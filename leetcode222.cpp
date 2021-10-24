/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<queue>
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        //BFS
        queue<TreeNode*> q;
        q.push(root); //root 開始
        int count =0;
        while(!q.empty()){
            count +=1;//node數+1
            TreeNode* node = q.front();
            q.pop();
            
            if(node->left != NULL)//有left subtree 
                q.push(node->left);//放入queue
            if(node->right!=NULL)//有right subtree
                q.push(node->right);//放入queue
        }
        return count;
    }
};
