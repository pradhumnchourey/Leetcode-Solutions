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
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* top = s.top();
            s.pop();
            if(val==top->val)
                return top;
            if(val<top->val){
                if(top->left)
                    s.push(top->left);
            }
            else if(top->right)
                s.push(top->right);
        }
        return NULL;
    }
};