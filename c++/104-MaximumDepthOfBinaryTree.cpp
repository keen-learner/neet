/*
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:
    Input: root = [3,9,20,null,null,15,7]
    Output: 3

Example 2:
    Input: root = [1,null,2]
    Output: 2

Constraints:
    The number of nodes in the tree is in the range [0, 104].
    -100 <= Node.val <= 100
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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int lmax = maxDepth(root->left);
        int rmax = maxDepth(root->right);
        return (1 + max(lmax, rmax));
    }
};

class Solution1 {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count = 1;
        int res = 0;

        while (!q.empty()) {
            TreeNode* f = q.front();
            q.pop();
            --count;

            if (f->left) q.push(f->left);
            if (f->right) q.push(f->right);
            if (count == 0) {
                ++res;
                count = q.size();
            }
        }
        return res;
    }
};