#include "iostream"
#include "vector"
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
    // in inorder traversal we do work in constant work
    // time complexity : o(n) 
    // auxilary space : o(height of binary tree)
    // number recursions will be equal (h+1) in worst case where 
    // h is height. the number of nodes from the root to leaf the longest path.
    void inorder(node *root)
    {
        if(root != NULL)
        {
            inorder(root->left);
            cout<<root->key<<" ";
            inorder(root->right);
        }
    }
    void preorder(node *root)
    {
        if(root != NULL)
        {
            cout<<(root->key)<<" ";
            preorder(root->left);
            preorder(root->right);
        }
    }
    void postorder(node *root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }

}s;
int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
   cout<<"POSTORDER"<<"\n";
   s.postorder(root);
   cout<<"PREORDER"<<"\n";
   s.preorder(root);
   cout<<"INORDER"<<"\n";
   s.inorder(root);

    
}