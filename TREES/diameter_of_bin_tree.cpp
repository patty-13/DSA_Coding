#include "iostream"
#include "algorithm"
#include "stack"
#include "queue"
using namespace std;
struct node
{
    int key;
    node *left,*right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int height(node *root)
{
    if(root == NULL) {return 0;}
    else{ return 1 + max(height(root->left),height(root->right));}
}
int diameter(node *root)
{
    if(root == NULL){return 0;}
    int d1 = 1 + height(root->left)+ height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d2,d3));
}
// efficient code
int res = 0;
int height(node *root)
{
    if(root == NULL) {return 0;}
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res, lh+rh+1);
    return 1 + max(lh,rh);
}
int main()
{

}