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
    
    void traversal(TreeNode * root, vector<int> &ans){
        
        if(root==NULL)
            return;
        ans.push_back(root->val);
        traversal(root->left,ans);
        traversal(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> ans;
        traversal(root1,ans);
        traversal(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};