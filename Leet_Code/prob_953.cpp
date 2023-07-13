#include "bits/stdc++.h"
using namespace std;
int main()
{
    // string str = "world";
    // string str1 = "word";
    // set<char> s(str.begin(), str.end());
    // for(auto i : s)
    // {
    //     cout<<i;
    // }
    // set<char> s1(str1.begin(), str1.end());
    // for(auto j:s)
    // {
    //     cout<<j;
    // }
    // vector<string> words = {"world","word","row"};
    vector<string> words = {"hello","leetcode"};
    // unordered_set<char> s;
    string ss1 = "hlabcdefgijkmnopqrstuvwxyz";

    // for(int i  = 0 ; i < words.size() ; i++)
    // {
    //     string str = words[i];
    //     s.insert(str.begin(), str.end());
    // }
    // string ss ="";
    // for(auto i : s)
    // {
    //     ss += i;
    // }
    // cout<<ss<<"\n";
    
   // if() {cout<<"yes";}
   // else{cout<<"No";}
    unordered_map<char, int> m;
    // unordered_map<char, int>::iterator itr;
    string str1  ="hello";
    for(int i = 0 ; i < ss1.size() ; i++)
    {
        // cout<<m[ss1[i]]<<"\n";
        m[ss1[i]] = i;
        cout<<m[ss1[i]]<<"\n";
    }
    cout<<"\n";
    cout<<"printing strings"<<"\n";
    for(int i =0 ; i < str1.size() ;i++)
    {
        cout<<m[str1[i]]<<"\n";
    }
    string ss2 = "";
    for(auto &j :m)
    {
        cout<<j.first;
    }
   // cout<<ss2<<"\n";
}