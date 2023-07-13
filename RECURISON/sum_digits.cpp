#include "bits/stdc++.h"
using namespace std;
int sum_digits(int n, int sum)
{
    if(n<=0){return sum;}
    else
    {
        int a = n%10;
        return sum_digits(n/10, sum+a);
    }
}
int main()
{
    int n, sum=0; cin>>n;
    cout<<sum_digits(n,sum);
}