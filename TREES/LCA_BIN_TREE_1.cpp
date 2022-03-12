#include "iostream"
#include "algorithm"
#include "queue"
#include "stack"
#include "vector"
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
bool findPath(node *root, vector<node *> &a, int n)
{
    if(root == NULL) {return false;}
    a.push_back(root);
    if(root->key == n){return true;}
    if(findPath(root->left,a,n) || findPath(root->right,a,n)){return true;}
    a.pop_back();
    return false;
}
node *LCA_naive(node *root, int n1, int n2)
{
    vector<node *> path1, path2;
    if(findPath(root,path1,n1) == false || findPath(root, path2, n2) == false)
    {return NULL;}

    for(int i = 0 ; i < path1.size() - 1  && i < path2.size() - 1 ; i++)
    {
        if(path1[ i + 1] != path2[i+1])
        {
            return path1[i];
        }
    }
    return NULL;
}

int main()
{
    // same goes for every bst.
}