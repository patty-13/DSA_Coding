#include "iostream"
#include "algorithm"
#include "vector"
#include "unordered_set"
#include "unordered_map"
using namespace std;
int approach_1(vector<int> &a)
{
    int sum = 0;
    for(int i =0; i< a.size() ;i++)
    {
        for(int j= i+1 ;j<=a.size()-1; j++)
        {
            sum = sum + a[j];
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0 ; i < a.size() ;i++)
    {
        cin>>a[i];
    }
    cout<<"Naive approach"<<endl;
    cout<<approach_1(a);
}