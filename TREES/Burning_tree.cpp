#include "iostream"
#include "algorithm"
#include "queue"
#include "vector"
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int time = 0;
int burn(Node *root, int n1, int &dist)
{
    cout<<"starting "<<"\n";
    if(root == NULL){return 0;}
    if(root->key == n1){dist = 0; return 1;}
    int left_dist = -1, right_dist = -1;
    cout<<"going left "<<"\n";
    int lh = burn(root->left, n1, left_dist);
    cout<<lh<<" lh printing "<<endl;
    cout<<"going right "<<"\n";
    int rh = burn(root->right, n1, right_dist);
    cout<<rh<<" rh printing "<<endl;
    cout<<"left_dist "<<left_dist<<"\n";
    cout<<"right_dist "<<right_dist<<"\n";
    if(left_dist != -1)
    {
        dist = left_dist + 1;
        // why rh confusing;
        time = max(time, dist + rh);
        cout<<"Printing time lh "<<time<<endl;
    }
    else
    {
        dist = right_dist + 1;
        time = max(time, dist + lh);
        cout<<"Printing time rh "<<time<<endl;
    }
    return max(lh, rh) + 1;
    
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
	int dist=-1;int leaf=50;
	burn(root,leaf,dist);
	cout<<time;
}