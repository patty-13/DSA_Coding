#include "iostream"
#include "algorithm"
#include "map"
#include "math.h"
#include "vector"
#include "unordered_map"
using namespace std;
int solt_1(vector<int> &a)
{
    int res = 0;
    for(int i= 0 ; i <a.size(); i++)
    {
        int count_0 = 0,count_1 = 0;
        for(int j= i; j <a.size(); j++)
        {
            if(a[i] == 1)
            {
                count_1++;
            }
            else
            {
                count_0++;
            }
            if(count_1 == count_0)
            // REMEMBER WHY USED MAX HERE.
            // WE ARE TRAVRSING AND STORING ANY OTHER SUBARRAY
            // MAX LENGTH TOO SO IT WOULD WORK.
            res = max(res, j-i+1);
        }
    }
    return res;
}
int soltn_2(vector<int> &a)
{
    unordered_map<int,int> m;
    int prefix_sum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        prefix_sum += a[i];
    }
    return ;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < a.size(); i++)
    {
        cin>>a[i];
    }
    cout<<"NAIVER SOLTN"<<"\n";
    solt_1(a);
    cout<<"BETTER SOLTN"<<"\n";
    soltn_2(a);

}