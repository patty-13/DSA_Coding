#include "iostream"
#include "vector"
#include "algorithm"
#include "map"
#include "queue"
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
bool children_sum_prop(node *root)
{
    if(root == NULL)
    {
        return true;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum = 0;
    if(root->left != NULL)
    {
        sum += root->left->key;
    }
    if(root->right != NULL)
    {
        sum += root->right->key;
    }
    return (root->key == sum && children_sum_prop(root->left) && children_sum_prop(root->right));

}
int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->left->left = new node(3);
    root->left->right = new node(5);
    children_sum_prop(root);
}