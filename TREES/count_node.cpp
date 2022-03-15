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
int counter = 0;
int count_node(node *root, queue<int> &q)
{
    if(root != NULL)
    {
        
        count_node(root->left, q);
        q.push(root->key);
        count_node(root->right, q);
        
    }
    return q.size();

}
int approach_2(node *root)
{
    if(root == NULL){return 0;}
    else
    {
        return 1 + approach_2(root->left) + approach_2(root->right);
    }
}
// int count_node(node *root)
// {
//     if(root == NULL){return 0;}
//     queue<node *> q;
//     q.push(root);
//     while(q.empty() == false)
//     {   node *curr = q.front();
//         q.pop();
//         if(curr->left != NULL){q.push(curr->left);}
//         if(curr->right != NULL){q.push(curr -> right);}
//     }
// }
int main()
{
    queue<int> q;
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    cout<<count_node(root,q);
    cout<<"second approach"<<"\n";
    cout<<approach_2(root);

}