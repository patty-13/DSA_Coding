#include "iostream"
#include "algorithm"
#include "unordered_map"
#include "map"
#include "unordered_set"
using namespace std;
int main()
{
    // it is 
    // set is a self balancing binary tree but unordered set is 
    // it is stored in hash table, so in different comiplers we will
    // get different answers.
    // we will get permutation of set(10,20,30,40)
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for (auto itr = s.begin(); itr!= s.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<s.size()<<" ";
    cout<<"endl";
    s.clear();
    cout<<s.size()<<" ";

    // key value pairs using unordered_map
    unordered_map<string, int> m;
    m["gfg"]  =20;
    m["ide"] = 30;
    m.insert({"hello",15});
    for (auto x: m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
 }