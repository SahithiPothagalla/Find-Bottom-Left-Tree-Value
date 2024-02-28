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
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = -1;
        int leftmostValue = 0;
        dfs(root, 0, maxDepth, leftmostValue);
        return leftmostValue;
    }
    void dfs(TreeNode* node, int depth, int& maxDepth, int& leftmostValue) {
        if (!node) return;
        if (depth > maxDepth) {
            leftmostValue = node->val;
            maxDepth = depth;
        }
        dfs(node->left, depth + 1, maxDepth, leftmostValue);
        dfs(node->right, depth + 1, maxDepth, leftmostValue);
    }
};
auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
