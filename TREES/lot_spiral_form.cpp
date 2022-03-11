#include "iostream"
#include "algorithm"
#include "queue"
#include "stack"
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
void spiral_traversal(node *root)
{
    if(root == NULL){return;}
    queue<node *> q;
    stack<int> s;
    q.push(root);
    bool reverse = false;
    while(q.empty() == false)
    {
        int count = q.size();
        for(int  i = 0; i < count ; i++)
        {
            node *curr = q.front();
            q.pop();
            if(reverse)
            {
                s.push(curr->key);
            }
            // this statement is solely for printing the root 
            else
            {
                cout<<curr->key<<" ";
            }
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
        if(reverse)
        {
            while(s.empty() == false)
            {
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        // making reverse true so that the sprial moves in alternative format
        reverse = !reverse;
        cout<<"\n";

    }

}
void spiral_travel_method_2(node *root)
{
    if(root == NULL){return;}
    stack<node *> s1;
    stack<node *> s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            node *temp = s1.top();
            s1.pop();
            cout<<temp->key<<" ";
            if(temp->left != NULL){s2.push(temp->left);}
            if(temp->right != NULL){s2.push(temp->right);}
        }
        while(!s2.empty())
        {
            node *temp = s2.top();
            s2.pop();
            cout<<temp->key<<" ";
            if(temp->right != NULL){s1.push(temp->right);}
            if(temp->left != NULL){s1.push(temp->left);}
        }
    }
}
int main()
{

}