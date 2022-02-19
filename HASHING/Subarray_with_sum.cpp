#include "iostream"
#include "algorithm"
#include "vector"
#include "unordered_set"
#include "unordered_map"
using namespace std;
int approach_1(vector<int> &a, int sum)
{
    
    for(int i =0; i< a.size() ;i++)
    {
        int curr_sum = 0;
        for(int j= i ;j<=a.size()-1; j++)
        {
            curr_sum = curr_sum + a[j];
            if(sum == curr_sum )
            {
                return true;
            }
        }
    }
    return false;
}
int approach_2(vector<int> &a, int sum)
{
    int prefix_sum = 0;
    unordered_set<int> h;
    for(int i= 0 ; i< a.size() ; i++)
    {
        prefix_sum = prefix_sum  + a[i];
        if(prefix_sum == sum) {return true;}
        // so the logic is that 
        /*
            prefix_sum 2
            ________________
            a1,a2,a3......an
            _______ ________
            prefix_sum  sum

            prefix_sum  + sum = prefix_sum 2
            so basically if we prefix_sum 2 - sum == prefix_sum

            and if it is present in hash table that we store simultaneously
            then we know that subarray has sum value.
        */
        if(h.find(prefix_sum - sum) != h.end())
        {
            return true;
        }
        h.insert(prefix_sum);
    }
    return false;
}
int main()
{
    int n,n1;
    cin>>n;
    cout<<"ENTER THE SUM"<<endl;
    cin>>n1;
    vector<int> a(n);
    for(int i =0 ; i < a.size() ;i++)
    {
        cin>>a[i];
    }
    cout<<"Naive approach"<<endl;
    cout<<approach_1(a,n1);
    cout<<"hash map approach"<<endl;
    cout<<approach_2(a,n1);
}