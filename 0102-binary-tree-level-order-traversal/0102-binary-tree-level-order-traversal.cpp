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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)
            return {};
        queue<pair<TreeNode*, int>> q;
        q.push({root,0});
        vector<vector<int>> res;
        int level=0;
        while(!q.empty()){
            auto front_pair = q.front();
            TreeNode* front = front_pair.first;
            int temp_level = front_pair.second;
            q.pop();
            if(front->left)
                q.push({front->left, temp_level+1});
            if(front->right)
                q.push({front->right, temp_level+1});
            res.resize(temp_level+1);
            res[temp_level].push_back(front->val);
        }
        return res;
    }
};