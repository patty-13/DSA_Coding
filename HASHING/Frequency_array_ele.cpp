#include "iostream"
#include "unordered_map"
#include "unordered_set"
#include "map"
#include "vector"
#include "algorithm"
using namespace std;
void count_Freq(vector<int> &a)
{
    
    for(int i = 0; i <a.size() ;i++)
    {
        bool flag= false;
        for(int j = 0; j <i ; j++)
            if(a[i] == a[j])
            {
                flag = true;
                break;
             }

        if(flag == true)
            continue;
        int freq = 1;
        for(int j = i+1 ; j<a.size(); j++)
            if(a[i] == a[j])
                freq++;
        cout<<a[i]<<" "<<freq<<"\n";

        // for(int j = a.size() ; j <=i ; j--)
        // {
        //     if(a[i]==a[j] || i == j)
        //     {
        //         count++;
        //     }
            
        // }        
    }
}
void mY_HASH(vector<int> &a)
{
    unordered_map<int,int> m;
    for(int i = 0 ; i<a.size() ; i++)
    {
        m[a[i]]++;
    }
    for(auto e : m)
    {
        cout<<e.first<<" "<<e.second<<"endl";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i<a.size(); i++)
    {
        cin>>a[i];
    }
    cout<<"NAIVE METHOD"<<"\n";
    for(int i =0 ; i < a.size() ; i++)
    {
        cout<<a[i]<<" ";
    }
    count_Freq(a);
    cout<<"USING HASHMAP"<<"\n";
    mY_HASH(a);
    
}