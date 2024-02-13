/*
Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.

Example 1:
    Input: root = [1,2,3,4,5]
    Output: 3
    Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].

Example 2:
    Input: root = [1,2]
    Output: 1

Constraints:
    The number of nodes in the tree is in the range [1, 104].
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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int res = INT_MIN; // max diameter
        depth(root, res); // returns depth
        return res;
    }

    int depth(TreeNode* root, int& res) {
        if(!root) return 0;
        int lmax = depth(root->left, res); // returns depth of left tree
        int rmax = depth(root->right, res); // returns depth of right tree
        res = max(res, lmax+rmax);
        int mx = 1+max(lmax, rmax);
        return mx;
    }

};

class Solution1 {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        return depth(root)[0];
    }

private:
    vector<int> depth(TreeNode* root) { // return [max, depth]
        vector<int> res(2);
        if(!root) return {0, 0};
        auto l = depth(root->left);
        auto r = depth(root->right);
        res[0] = max(l[1]+r[1], max(l[0], r[0])); //max
        res[1] = 1 + max(l[1], r[1]); //depth
        return res;
    }
};

class Solution2 {
public:
    int diameterOfBinaryTree(TreeNode* root) {
       if(!root) return 0;
       return max(depth(root->left)+ depth(root->right), 
                  max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }

private:
    int depth(TreeNode* root) {
        if(!root) return 0;
        return 1+ max(depth(root->left), depth(root->right));
    }
};