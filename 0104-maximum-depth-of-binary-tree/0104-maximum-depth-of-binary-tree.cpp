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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int depth=0;
        int currh=0;
        if(root->left!=NULL){
            currh = maxDepth(root->left);
            if(currh>depth){
                depth=currh;
            }
        }
        if(root->right!=NULL){
            currh = maxDepth(root->right);
            if(currh>depth){
                depth=currh;
            }
        }
        return depth+1;        
    }
};