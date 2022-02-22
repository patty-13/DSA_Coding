#include "iostream"
#include "algorithm"
#include "unordered_set"
#include "unordered_set"
#include "vector"
using namespace std;
void find_solt(vector<int> &a, int k)
{
   
    
    for(int i = 0 ; i < a.size()-k+1 ; i++)
    {
         unordered_set<int> h;
        int m = 0;
           while(m<k)
           {
               h.insert(a[i+m]);
               m++;
           }
        cout<<h.size()<<" ";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i =0 ; i< a.size(); i++)
    {
        cin>>a[i];
    }
    find_solt(a,k);
}