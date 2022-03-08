#include "iostream"
#include "algorithm"
using namespace std;

struct node
{
    int key;
    node *left,*right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
node *BTtoDLL(node *root)
{
    node *prev = NULL;
    if(root == NULL)
    {
        return root;
    }
    node *head = BTtoDLL(root->left);
    if(prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BTtoDLL(root->right);
    return head;
}
int main()
{

}