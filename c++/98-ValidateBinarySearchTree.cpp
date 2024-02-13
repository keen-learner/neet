/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:

    The left subtree of a node contains only nodes with keys less than the node's key.
    The right subtree of a node contains only nodes with keys greater than the node's key.
    Both the left and right subtrees must also be binary search trees.

Example 1:
    Input: root = [2,1,3]
    Output: true

Example 2:
    Input: root = [5,1,4,null,null,3,6]
    Output: false
    Explanation: The root node's value is 5 but its right child's value is 4.

Constraints:
    The number of nodes in the tree is in the range [1, 104].
    -231 <= Node.val <= 231 - 1
*/

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
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return helper(root, prev);
    }
    bool helper(TreeNode* root, TreeNode* &prev) {
        if (!root) return true;
        if (!helper(root->left, prev)) return false;
        if (prev && prev->val >= root->val) return false; 
        prev = root;
        return helper(root->right, prev);
    }
};

class Solution1 {
public:
    bool isValidBST(TreeNode* root) {
        // Call the helper function with initial range set to negative and positive infinity
        return bst(root, LLONG_MIN, LLONG_MAX);
    }

    // Helper function to perform DFS traversal
    bool bst(TreeNode* root, long long min_val, long long max_val) {
        // Base case: If the current node is NULL, return true
        if (root == NULL) {
            return true;
        }

        // Check if the current node's value is within the valid range
        if (!(min_val < root->val && root->val < max_val)) {
            return false;
        }

        // Recursively check the left and right subtrees with updated ranges
        return bst(root->left, min_val, root->val) && bst(root->right, root->val, max_val);
    }
};

class Solution2 {
public:

    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        vector<int> res;
        inorder(root,res);
        for(int i=0;i<res.size()-1;i++)
            if(res[i]>=res[i+1])
                return false;
        return true;        
    }

private:
    void inorder(TreeNode *root, vector<int> & res){
        if(root==NULL)
            return;
        inorder(root->left,res);    
        res.push_back(root->val);    
        inorder(root->right,res);
    }
};