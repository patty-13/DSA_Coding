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
int max_width(node *root)
{
    if(root == NULL)
    {
        return ;
    }
    queue<node *> q;
    q.push(root);
    int res = 0;
    while(q.empty() == false)
    {
        int count = q.size();
        res = max(res,count);
        for(int i = 0 ; i < count ; i++)
        {
            node *curr = q.front();
            q.pop();
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
    return res;
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
    cout<<max_width(root);
}