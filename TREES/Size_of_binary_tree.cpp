#include "iostream"
#include "queue"
#include "algorithm"
using namespace std;
int size = 0;
struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        left = right = NULL;
        key = k;
    }
};
int size_bin(node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
      return  size_bin(root->left) + size_bin(root->right) + 1;
    }
    
}
int main()
{
    node *root  = new node(10);
    root->left = new node(80);
    root->left->left  = new node(30);
    root->left->right = new node(40);
    root->right = new node(70);
    cout<<size_bin(root);
}