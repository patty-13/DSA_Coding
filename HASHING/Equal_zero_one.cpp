#include "iostream"
#include "algorithm"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
int find_sol(vector<int> &a)
{
    unordered_map<int,int> h;
    int prefix_sum =0 ;
    for(int i =0 ;i < a.size(); i++)
    {
        if(a[i] == 0)
        {
            a[i] = -1;
        }
    }
    int max_Len = 0;
    for(int i =0 ; i < a.size() ;i++)
    {
        prefix_sum += a[i];
        if(prefix_sum == 0)
        max_Len = i+1;
        if(h.find(prefix_sum + a.size()) != h.end())
        {
            max_Len = max(max_Len, i - h[prefix_sum + a.size()]);
        }
        else
        {
            h[prefix_sum + a.size()] = i;
        }
    }
    return max_Len;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i< a.size() ;i++)
    {
        cin>>a[i];
    }
    cout<<find_sol(a);
}