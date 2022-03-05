#include "iostream"
#include "vector"
#include "algorithm"
#include "map"
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int height(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->right),height(root->left))+1;
    }
}
bool balance_tree(node *root) // my approach 
{
    if(root == NULL)
    {
        return false;
    }
    else
    {
        int lheight = balance_tree(root->left)+1;
        int rheight = balance_tree(root->right)+1;
        if(lheight - rheight == 1 || rheight - lheight == 1)
        {
            return true;
        } 
    }
    return false;
}
bool isbalanced(node *root) // o(n^2)
{
    if(root == NULL)
    {
        return true;
    }
    int l_height = height(root->left);
    int r_height = height(root->right);
    return(abs(l_height-r_height)<=1 && isbalanced(root->left) && isbalanced(root->right));
}
bool is_balanced(node *root) // tell both balanced and heigh simulatenously.
// return -1 if tree is unbalanced and return 0 or 1 if balanced.
{
    if(root == NULL)
    {
        return true;
    }
    int  l_height = is_balanced(root->left);
    if(l_height == -1)
    {
        return -1;
    }
    int r_height = is_balanced(root->right);
    if(r_height == -1)
    {
        return -1;
    }
    if(abs(l_height - r_height) > 1)
    {
        return -1;
    }
    else
    {
        return max(l_height , r_height) + 1;
    }
}
int main()
{
    // same code as for all the trees
}