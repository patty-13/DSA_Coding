#include "iostream"
#include "algorithm"
#include "queue"
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
// consturcitng binary tree from two orders 
// we can construct binary tree only from two traversals inorder and preorder.
/*
    in this the preorder traversal helps in defining the root for the tree
    and the inorder helps in defining the left and right of the tree.
*/
void Inorder_to_Bin(node *root)
{
    if(root != NULL)
    {
        Inorder_to_Bin(root->left);
        cout<<root->key<<" ";
        Inorder_to_Bin(root->right);
    }

}
int preindex = 0;
node *ctree(int in[], int pre[], int is, int ie)
{
    if(is > ie) {return NULL;}
    node *root = new node(pre[preindex++]);
    int index;
    for(int i = is; i <= ie ; i++)
    {
        if(in[i] == root->key)
        {
            index = i;
            break;
        }
    }
    root->left = ctree(in, pre, is, index -1);
    root->right = ctree(in, pre, index + 1, ie);
    return root;
}
int main()
{

}