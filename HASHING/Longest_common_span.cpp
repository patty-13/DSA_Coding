#include "iostream"
#include "algorithm"
#include "unordered_map"
#include "unordered_set"
#include "vector"
#include "map"
using namespace std;
int find_solt(vector<int> &a, vector<int> &b)
{
    unordered_map<int,int> h,h1;
    for(int i = 0,j =0 ; i<a.size(); i++, j++)
    {
        a[i] = a[i] == 0 ? -1 : 1;
        b[i] = b[i] == 0 ?  -1 : 1;
    }
    int maxLen =0, prefix_sum_a = 0,prefix_sum_b = 0;
    for(int i = 0 ; i< a.size() ; i++)
    {
        prefix_sum_a += a[i];
        prefix_sum_b += b[i];
        if(prefix_sum_a == 0 && prefix_sum_b ==0)
        {
            maxLen = i + 1;
        }
        if(h.find(prefix_sum_a + a.size()) != h.end() && h1.find(prefix_sum_b + b.size()) != h1.end())
        {
            maxLen = max(maxLen, i - h[prefix_sum_a + a.size()]);
        }
        else
        {
            h.insert({prefix_sum_a,i});
            h1.insert({prefix_sum_b,i});
        }
    }
    return maxLen;
}
int find_solt_2(vector<int> &a, vector<int> &b)
{
    unordered_map<int, int> h;
    int maxLen =0, prefix_sum = 0;
    vector<int> c(a.size());
    for(int i = 0; i< a.size() ;i++)
    {
        c[i] = a[i] -  b[i];
    }
    for(int i = 0; i < c.size() ; i++)
    {
        prefix_sum += c[i];
        if(prefix_sum == 0)
        {
            maxLen = i+1;
        }
        if(h.find(prefix_sum) != h.end())
        {
            maxLen = max(maxLen, i - h[prefix_sum]);
        }
        else
        {
            h[prefix_sum] = i;
            // or h.insert({prefix_sum, i});
        }
    }
    return maxLen;
}
int main()
{
    int n,n1;
    cin>>n;
    cin>>n1;
    vector<int> a(n),b(n1);
    for(int i = 0; i< a.size() ; i++)
    {
        cin>>a[i];
    }
    for(int j =0 ; j < b.size() ; j++)
    {
        cin>>b[j];
    }
   // cout<<find_solt(a,b);
    cout<<"Approach 2"<<endl;
    cout<<find_solt_2(a,b);
}