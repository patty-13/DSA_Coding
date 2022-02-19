#include "iostream"
#include "algorithm"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
typedef long long ll;
void intersect_array(vector<int> &a, vector<int> &b)
{
    int count =0 ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        for(int j= 0 ; j < b.size() ; j++)
        {
            if(a[i] == b[j])
            {
                cout<<a[i]<<" "<<b[j]<<" "<<count<<"\n";
                count++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<count;
}
int intersect_hash_map(vector<int> &a, vector<int> &b)
{
    // unordered_set<int> m,m1;
    // for(int i =0,j=0; i<a.size(),j<b.size();i++,j++)
    // {
    //    m.insert(a[i]);
    //    m1.insert(b[j]);
    // }
    int ress= 0;
    unordered_set<int> m(a.begin(),a.end()+a.size());
    for(int i = 0; i < a.size(); i++)
    {
        if(m.find(b[i]) != m.end())
        {
            ress++;
            m.erase(b[i]);
        }
    }
    return ress;
}
int main()
{
    int n,n1;
    cin>>n;
    cin>>n1;
    vector<int> a(n);
    vector<int> b(n1);
    for(int i = 0 ; i<a.size() ; i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j< b.size() ; j++)
    {   
        cin>>b[j];
    }
    intersect_array(a,b);
    cout<<"now using hashmap"<<"\n";
    intersect_hash_map(a,b);
}
