
/*
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Example 1:
    Input: root = [3,9,20,null,null,15,7]
    Output: true

Example 2:
    Input: root = [1,2,2,3,3,null,null,4,4]
    Output: false

Example 3:
    Input: root = []
    Output: true

Constraints:
    The number of nodes in the tree is in the range [0, 5000].
    -104 <= Node.val <= 104
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    bool isBalanced(TreeNode *root) {
        if(!root) return true;
        int length;
        return helper(root, length);
    }
private:    
    bool helper(TreeNode* root, int& length) {
        if(!root) {length = 0; return true;}
        int llength = 0, rlength = 0;
        auto lstatus = helper(root->left, llength);
        auto rstatus = helper(root->right, rlength);
        length = 1+max(llength,rlength);
        return lstatus && rstatus && (abs(llength - rlength) <=1);
    } 
     
};


/*
going by definition: abs(left-right)<=1 and
left and right subtrees should be balanced
*/
class Solution1 {
public:
    int maxDepth(TreeNode * root){
        if (root==NULL){return 0;}
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }

    bool isBalanced(TreeNode *root) {
        if(!root) return true;
        if (abs(maxDepth(root->left) - maxDepth(root->right)) >1) {return false;}
        return (isBalanced(root->left) && isBalanced(root->right));
    }
     
};