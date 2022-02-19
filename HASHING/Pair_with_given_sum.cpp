#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include "unordered_map"
#include "unordered_set"

using namespace std;
string n_square_approach_1(vector<int> &a, int sum)
{
    string flag;
    for(int i =0 ; i<a.size();i++)
    {
        for(int j = a.size(); j <i;j--)
        {
            if(a[i]+a[j] == sum)
            {
                flag = "True";
                break;
            }
        }
        flag = "False";
    }
    return flag;
}
int approach_2(vector<int> &a, int sum)
{
    
    for(int i =0,j=a.size()-1; i < j;)
    {
        if(a[i] + a[j] == sum)
            {
                return 1;
                break;
            }
            else if(a[i] + a[j] < sum)
            {
                i++;
            }
            else
            {
                j--;
            }
    }
    return 0;
}
int approach_3(vector<int> &a, int sum)
{
    unordered_set<int> h;
    for(int i =0 ; i < a.size() ; i++)
    {
       if( h.find(sum - a[i]) !=h.end())
       {
           return 1;
       }
       else
       {
           h.insert(a[i]);
       }
    }
    return 0;
}
int main()
{
    int n,n1;
    cin>>n;
    cout<<"ENTER SUM"<<"\n";
    cin>>n1;
    vector<int> a(n);
    for(int i =0; i<a.size(); i++)
    {
        cin>>a[i];
    }
   cout<<"Approach 1"<<"endl";
    n_square_approach_1(a,n1);
    // uncomment sort option if usiing approach 2, two pointer method.
    cout<<"Approach 2"<<endl;
    //sort(a.begin(),a.end());
    cout<<(bool)approach_2(a,n1);
    // using hash map which works best for un sorted array. and in time o(n)
    cout<<"APPROACH 3"<<endl;
    cout<<(bool)approach_3(a,n1);
}