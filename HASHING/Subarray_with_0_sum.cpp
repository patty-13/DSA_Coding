#include "iostream"
#include "algorithm"
#include "unordered_set"
#include "unordered_map"
#include "vector"
using namespace std;


int hash_method(vector<int> &a)
{
    // so basically we are simultaneously creating a hash table of 
    // of prefix sum and checking if the sum exists with new prefix sum
    // so at the end it is if we find the prefix sum at the end in the 
    // hashmap then 
    unordered_set<int> h;
    int sum = 0;
    for(int i=0; i<a.size() ; i++)
    {
        sum = sum + a[i];
        if(h.find(sum) != h.end() )
        {
            return 1;
        }
        if(sum == 0)
        {
            return 1;
        }
        h.insert(sum);
    }
    return 0;

}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < a.size() ; i++)
    {
        cin>>a[i];
    }
   // USING PREFIX SUM AND HASH
    cout<<"Approach 2"<<endl;
    cout<<(bool)hash_method(a);
}