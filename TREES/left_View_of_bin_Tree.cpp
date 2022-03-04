#include "iostream"
#include "vector"
#include "algorithm"
#include "queue"
using namespace std;
int maxlevel = 0;
int level =  1;
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
void left_view(node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if(maxlevel < level)
    {
        cout<<(root->key)<<" ";
        maxlevel = level;
    }
    left_view(root->left, level+1);
    left_view(root->right, level +1);
}
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);
    left_view(root,1);
}