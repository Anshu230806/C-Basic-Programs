#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// TreeNode definition
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    vector<vector<int>> preInPostTraversal(TreeNode *root)
    {
        stack<pair<TreeNode *, int>> st;
        st.push({root, 1});
        vector<int> pre, in, post;

        if (root == NULL)
            return {pre, in, post};

        while (!st.empty())
        {
            auto &it = st.top(); // Reference to the top element

            if (it.second == 1)
            {
                pre.push_back(it.first->val);
                it.second++; // Directly modifies the element in stack

                if (it.first->left != NULL)
                {
                    st.push({it.first->left, 1});
                }
            }
            else if (it.second == 2)
            {
                in.push_back(it.first->val);
                it.second++; // Directly modifies the element in stack

                if (it.first->right != NULL)
                {
                    st.push({it.first->right, 1});
                }
            }
            else
            {
                post.push_back(it.first->val);
                st.pop();
            }
        }

        return {pre, in, post};
    }
};

// Helper function to create a sample tree
TreeNode *createSampleTree()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);

    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    return root;
}

// Helper function to print vector
void printVector(const string &name, const vector<int> &vec)
{
    cout << name << ": ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    Solution solution;
    TreeNode *root = createSampleTree();

    vector<vector<int>> result = solution.preInPostTraversal(root);

    cout << "Tree Traversals:" << endl;
    printVector("Preorder  ", result[0]);
    printVector("Inorder   ", result[1]);
    printVector("Postorder ", result[2]);

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}