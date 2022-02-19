#include "iostream"
#include "algorithm"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
typedef long long ll;
int union_arrays(vector<int> &a, vector<int> &b)
{
    unordered_set<int> m;
    for(int i =0 ; i<a.size() ; i++)
    {
        m.insert(a[i]);
    }
    for(int i = 0; i<b.size() ; i++)
    {
        m.insert(b[i]);
    }
    return m.size();
}
int main()
{
    int n,n1;
    cin>>n;
    cin>>n1;
    vector<int> a(n);
    vector<int> b(n1);
    for(int i =0 ; i<a.size(); i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j<b.size(); j++)
    {
        cin>>b[j];
    }
    cout<<"uNion"<<"\n";
    cout<<union_arrays(a,b);
}