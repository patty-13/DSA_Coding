#include "iostream"
#include "algorithm"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
int count_dist(vector<int> &a)
{
    int r = 0;
    for(int i =0 ;i<a.size();i++)
    {
        bool flag = false;
        for (int j =0 ; j <i; j++)
        {
            if(a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        r++;
    }
    return r;
}
int count_Hashmap(vector<int> &a)
{
    unordered_set<int> m;
    for(int i = 0; i<a.size();i++)
    {
        m.insert(a[i]);
    }
    return m.size();
}
int imp_count_hashmap(vector<int> &a)
{
    //unordered_set<int> m(a,a+a.size());
    //return m.size();
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto x: a)
    {
        cin>>a[x];
    }
    cout<<"NAIVE METHOD"<<"\n";
    cout<<count_dist(a);
    cout<<"HASH METHOD";
    cout<<count_Hashmap(a);
    cout<<"IMPROVED METHOD";
    cout<<imp_count_hashmap(a);
}