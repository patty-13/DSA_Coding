#include "iostream"
using namespace std;
struct node
{
    /* data */
    int key;
    node *right, *left;
    // node(int k)
    // {
    //     key = k;
    //     left = right = NULL;
    // }
};
struct node *newNode(int item)
{
    node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
struct node* insert(struct node* node, int item)
{
    if(node == NULL)
    {
        return newNode(item);
    }
    if(item < node->key)
    {
        return insert(node->left, item);
    }
    else
    {
        return insert(node->right, item);
    }
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 40);
    
}