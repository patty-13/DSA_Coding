#include "iostream"
#include "algorithm"
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
int max_ele(node *root)
{

    if(root == NULL)
    {
        return 0;
    }
    else
    {
        return max(root->key, max(max_ele(root->left),max_ele(root->right)));
    }
    // int max_element = 0;
    // if(root == NULL)
    // {
    //     return;
    // }
    // queue<node *> q;
    // q.push(root);
    // while(q.empty() == false)
    // {
    //     node *curr = q.front();
    //     q.pop();
    //     if(root->left != NULL)
    //     {
    //         q.push(curr->left);
    //     }
    //     if(root->right != NULL)
    //     {
    //         q.push(curr->right);
    //     }
    // }
}
int main()
{
    node *root  = new node(10);
    root->left = new node(80);
    root->left->left  = new node(30);
    root->left->right = new node(40);
    root->right = new node(70);
    cout<<max_ele(root)<<"\n";
}