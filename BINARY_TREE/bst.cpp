#include "iostream"
#include "algorithm"
#include "math.h"
#include "vector"
#include "map"
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int k)
    {
        key = k;
        right = left = NULL;
    }
};
void search(struct node *root, int key)
{
    if (root == NULL || root->key == key)
    {
       // return *root;
    }
    if (root->key > key)
    {
        return search(root->right, key);
    }
    else
    {
        return search(root->left, key);
    }
}
int main()
{

}