#include "iostream"
#include "vector"
#include "unordered_map"
#include "unordered_set"
#include "algorithm"
using namespace std;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right= NULL;
    }
};
 void k_distance(Node *root,int n)
{
        if(root == NULL)
        {
            return;
        }
        if(n == 0)
        {
            cout<<root->key<<" "; 
        }
        else
        {
            k_distance(root->left,n-1);
            k_distance(root->right,n-1);
        }
}
int main()
{
    int n;
    cin>>n;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    k_distance(root,n);
}