#include "iostream"
#include "algorithm"
#include "queue"
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        left = right = NULL;
        key = k;
    }
};
void level_order(Node *root)
{
    int h = height(root);
    for(int i = 0 ; i <= h ; i++)
    {
        print_current_level(root, i);
    }
}
void print_current_level(Node *root, int level)
{
    if(root == NULL)
    {
        return;
    }
    if(level == 1)
    {
        cout<<root->key;
    }
    else
    {
        print_current_level(root->left,level-1);
        print_current_level(root->right,level-1);
    }
}
// printing height of each subtree
// we are sending node not root in printing each subtree.
int height(Node *Node)
{
    if(Node == NULL)
    {
        return 0;
    }
    else
    {
       int  l_subtree = height(Node->left);
       int  r_subtree = height(Node->right);
       if(l_subtree>r_subtree)
       {
           return (l_subtree + 1);
       }
       else
       {
           return (r_subtree + 1);
       }
    }
}
void level_order(Node *root, int height)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        if(height ==0)
        {
            cout<<root->key<<" ";
        }
        else
        {
            level_order(root->left, height-1);
            level_order(root->right,height-1);
        }
    }
}
void opptimized_approach(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";
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
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    root->right->right = new Node(6);
    cout<<"using brute approach"<<"\n";
    level_order(root);
    cout<<"using queue approach"<<"\n";
}