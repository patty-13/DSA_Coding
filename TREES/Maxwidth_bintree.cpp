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
void max_width(node *root)
{
    if(root == NULL)
    {
        return ;
    }
    queue<node *> q;
    q.push(root);
    while(q.empty() == false)
    {
        node *curr = q.front();
    }
}
int main()
{
    // just an example for running.
    node *root = new node(10);
    root->left = new node(30);
    root->right = new node(20);
    root->left->right = new node(100);
    root->left->left= new node(90);
    root->right->right = new node(70);
    root->right->left = new node(300);
    max_width(root);
}