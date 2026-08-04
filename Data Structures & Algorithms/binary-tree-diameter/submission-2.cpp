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
    int depthOfBinaryTree(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int ldepth{0};
        if (root->left != nullptr) {
            ldepth = depthOfBinaryTree(root->left) + 1;
        }
        int rdepth{0};
        if (root->right != nullptr) {
            rdepth = depthOfBinaryTree(root->right) + 1;
        }

        return max(ldepth, rdepth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int answer{0};
        if (root == nullptr)
            return 0;

        if (root->left != nullptr) {
            answer += depthOfBinaryTree(root->left) + 1;
        }
        if (root->right != nullptr) {
            answer += depthOfBinaryTree(root->right) + 1;
        }

        answer = max(answer, diameterOfBinaryTree(root->left));
        answer = max(answer, diameterOfBinaryTree(root->right));

        return answer;
    }
};
