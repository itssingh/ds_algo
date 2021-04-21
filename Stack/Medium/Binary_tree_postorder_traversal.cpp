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
class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> s;
        vector<int> v;
        TreeNode *curr = root;
        while (curr || s.empty() == false)
        {
            while (curr)
            {
                v.push_back(curr->val);
                s.push(curr);
                curr = curr->right;
            }
            curr = s.top();
            s.pop();
            curr = curr->left;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};