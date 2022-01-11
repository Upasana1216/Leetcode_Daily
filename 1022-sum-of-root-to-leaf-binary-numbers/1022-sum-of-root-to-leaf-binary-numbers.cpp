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
    
        //Here we will use dfs as we need to go from root to leaf
        //Then we will find sum by converting base 2 to base 10
        //This conversion will be done by multiplying by 2
        //if both left and right are null then we will return the val obtained
        int dfs(TreeNode *root, int val) {
            
            if (root==NULL) 
                return 0;
            
            val = val * 2 + root->val;
            if (root->left == NULL && root->right == NULL) 
                return val ;
            else {
                int left = dfs(root->left, val) ;
                int right = dfs(root->right, val);
                return left + right; 
            }
    }
    
     int sumRootToLeaf(TreeNode *root) {
         
        return dfs(root, 0);
    }

    
};