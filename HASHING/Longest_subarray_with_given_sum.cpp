#include "iostream"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "algorithm"
#include "vector"

typedef long long ll;
using namespace std;
//NOTE IF THE PREFIX SUM IS REPEATING THEN THERE IS A SUBARRAY
// WITH ZERO SUM.
int long_subarray(vector<int> &a, int sum)
{
    unordered_map<int,int> h;
    int prefix_sum = 0;
    int res = 0;
    for(int i =0 ; i<a.size();i++)
    {
        prefix_sum +=  a[i];
        // checking base condiiton and edge case
        if(prefix_sum == sum)
        {
            res = i+1;
        }
        // checking if the prefix sum is there if not then insert it.
        if(h.find(prefix_sum) == h.end())
        {
           h.insert({prefix_sum, i}) ;
        }
        // if the sum mathces then return maximum of res  and i - j which gives position.
        if(h.find(prefix_sum - sum) != h.end())
        {
            res = max(res, i - h[prefix_sum - sum]);
        }
        
    }
    return res;
}
int main()
{
    int n,n1;
    cin>>n;
    cout<<"ENTER SUM"<<endl;
    cin>>n1;
    vector<int> a(n);
    for(int i =0 ; i<a.size() ; i++ )
    {
        cin>>a[i];
    }
   cout<<long_subarray(a,n1);
}