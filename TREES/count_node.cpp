#include "iostream"
#include "algorithm"
#include "queue"
#include "math.h"
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

// using extra space + log(n), recursion.
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
// using no extra space time complexity log(n)
int approach_2(node *root)
{
    if(root == NULL){return 0;}
    else
    {
        return 1 + approach_2(root->left) + approach_2(root->right);
    }
}
// using time complexity log(n) * log(n);
int approach_3(node *root)
{
    int lh = 0, rh = 0;
    node *curr = root;
    while(curr != NULL)
    {
        lh++;
        curr = curr->left;
    }   
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if(rh == lh) {return pow(2,lh)-1;}
    else {return 1 + approach_3(curr->left)+approach_3(curr->right);}
    

}
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