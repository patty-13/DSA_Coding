#include "iostream"
#include "algorithm"
#include "queue"
#include "math.h"
#include "vector"
using namespace std;
int index = 0;
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
void searlize(node *root, vector<int> &a)
{
    if(root == NULL)
    {
        a.push_back(-1);
        return;
    }
    a.push_back(root->key);
    searlize(root->left,a);
    searlize(root->right,a);
}
node *desearlize(vector<int> &a)
{
    if(index == a.size()) {return NULL;}
    int val = a[index];
    index++;
    if(val == -1){return NULL;}

    node *root = new node(val);
    root->left =  desearlize(a);
    root->right = desearlize(a);
    return root;
}
int main()
{

}