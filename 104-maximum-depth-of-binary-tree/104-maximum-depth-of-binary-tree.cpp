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
        
        
        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int res=1;
        while(!q.empty()){
            
            TreeNode * t=q.front();
            q.pop();
            
            if(t==NULL){
                if (q.size() > 0) {
                    q.push(NULL);
                    res+=1;
                }
            }else{
                
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            
        }
        return res;
    }
};