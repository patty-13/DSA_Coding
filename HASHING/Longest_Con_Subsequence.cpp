#include "iostream"
#include "algorithm"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
int naive_solt(vector<int> &a)
{
    sort(a.begin(),a.end());
    int len = 0, maxlen = 0;
    for(int i = 0; i < a.size(); i++)
    {
        //if((a[i+1] - a[i]) == 1)
         if(a[i] == a[i-1] + 1)
        {
            cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
            len++;
        }
        else if(a[i] != a[i-1])
        {
            maxlen = max(maxlen,len);
            len = 1;
        }
        
    }
    return max(maxlen, len);
}
int my_hash(vector<int> &a)
{
    unordered_set<int> h(a.begin(),a.end());
    int maxLen = 1;
   for(int i= 0; i < a.size(); i++)
   {
       if(h.find(i-1) == h.end())
       {
           int curr = 1;
           while(h.find(i + curr) != h.end())
           {
               curr++;
               maxLen = max(curr, maxLen);
           }
       }
   }
   return maxLen;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < a.size() ; i++)
    {
        cin>>a[i];
    }
    cout<<naive_solt(a);
    cout<<"APPROACH 2"<<endl;
    cout<<my_hash(a)<<endl;
}