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
// BFS using queues
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            double avg = 0;
            for (int i=0;i<size;i++){
                TreeNode* currentNode = que.front();
                que.pop();
                avg += currentNode->val;
                if (currentNode->left!=nullptr){
                    que.push(currentNode->left);
                }
                if(currentNode->right != nullptr){
                    que.push(currentNode->right);
                }
            }
            result.push_back((double)(avg/size));
        }
        return result;
    }
};
