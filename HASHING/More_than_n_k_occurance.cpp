#include "iostream"
#include "algorithm"
#include "unordered_map"
#include "unordered_set"
#include "vector"
#include "map"
using namespace std;
void find_solt(vector<int> &a, int n, int k)
{
    map<int,int> m;
    map<int,int>::iterator itr;
    int val = (int)n/k;
    cout<<val<<endl;
    for(int i =0 ;i < a.size() ; i++)
    {
        m[a[i]]++;
    }
    for(itr = m.begin(); itr != m.end(); itr++)
    {
        if(itr->second > val)
        {
            cout<<itr->first<<" ";
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i<a.size() ; i++)
    {
        cin>>a[i];
    }
    find_solt(a,n,k);
}