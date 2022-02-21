#include "iostream"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "algorithm"
#include "vector"
typedef long long ll;
using namespace std;
int long_subarray(vector<int> &a, int sum)
{
    unordered_map<int,int> h;
    int prefix_sum = 0;
    int res = 0;
    for(int i =0 ; i<a.size();i++)
    {
        prefix_sum = prefix_sum + a[i];
        
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