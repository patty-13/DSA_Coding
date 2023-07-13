#include "iostream"
#include "vector"
#include "unordered_map"
#include "map"
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < a.size(); i++)
    {
        cin>>a[i];
    }
    map<int,int> m;
    map<int,int>::iterator itr;
    for(int i = 0; i < a.size(); i++)
    {
        m[a[i]]++;
    }
    for(itr = m.begin(); itr != m.end(); itr++)
    {
        cout<<"N: "<<itr->first<<" C: "<<itr->second<<"\n";
    }
}