#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class BinaryTree
{
public:
    // TreeNode *root;
    TreeNode *insertRecursive(TreeNode *node, int data)
    {
        if (node == NULL)
        {
            return new TreeNode(data);
        }
        if (node->val < data)
        {
            node->right = insertRecursive(node->right, data);
        }
        else
        {
            node->left = insertRecursive(node->left, data);
        }
        return node;
    }
    TreeNode *insert(TreeNode *root, int x)
    {
        return insertRecursive(root, x);
    }
    // recursive
    void inorderRecursive(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inorderRecursive(root->left);
        cout << root->val << " ";
        inorderRecursive(root->right);
    }
    void inorder(TreeNode *root)
    {
        cout << "inorder" << endl;
        inorderRecursive(root);
        cout << endl;
    }
    void postorderRecursive(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        postorderRecursive(root->left);
        postorderRecursive(root->right);
        cout << root->val << " ";
    }
    void postorder(TreeNode *root)
    {
        cout << "postorder" << endl;
        postorderRecursive(root);
        cout << endl;
    }
    void preorderRecursive(TreeNode *root)
    {
        if (root == NULL)
        {

            return;
        }
        cout << root->val << " ";
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
    void preorder(TreeNode *root)
    {
        cout << "preorder" << endl;
        preorderRecursive(root);
        cout << endl;
    }
    // non recursive
    void pre(TreeNode *root)
    {
        if (root == NULL)
        {
            cout << "empty" << endl;
            return;
        }
        cout << "preorder iterative" << endl;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *node = st.top();
            cout << node->val << " ";
            st.pop();
            if (node->right)
                st.push(node->right);
            if (node->left)
                st.push(node->left);
        }
        cout << endl;
        return;
    }
    void in(TreeNode *root)
    {
        if (root == NULL)
        {
            cout << "empty" << endl;
            return;
        }
        cout << "inorder iterative" << endl;
        stack<TreeNode *> st;
        // st.push(root);
        TreeNode *curr = root;
        while (curr != NULL || !st.empty()) //
        {
            if (curr != NULL)
            {
                st.push(curr); //
                curr = curr->left;
            }
            else
            {
                TreeNode *node = st.top();
                cout << node->val << " ";
                st.pop();
                curr = node->right;
            }
        }
        cout << endl;
        return;
    }
    void post(TreeNode *root)
    {
        stack<TreeNode *> s1, s2;
        s1.push(root);
        while (!s1.empty())
        {
            TreeNode *node = s1.top();
            s2.push(node);
            s1.pop();
            if (node->left)
            {
                s1.push(node->left);
            }
            if (node->right)
            {
                s1.push(node->right);
            }
        }
        cout << "postorder iterartive " << endl;
        while (!s2.empty())
        {
            cout << s2.top()->val << " ";
            s2.pop();
        }
        cout << endl;
        return;
    }
};

int main()
{
    BinaryTree obj;
    TreeNode *root = new TreeNode(4);
    // int arr[] = {4, 2, 6, 1, 3, 5, 7};
    // for (int x : arr)
    // {
    //     root = obj.insert(root, x);
    // }
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    obj.preorder(root);
    obj.inorder(root);
    obj.postorder(root);
    obj.pre(root);
    obj.in(root);
    obj.post(root);
    return 0;
}