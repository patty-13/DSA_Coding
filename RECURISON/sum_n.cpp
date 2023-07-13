#include "bits/stdc++.h"
using namespace std;
int sum_n(int n, int a)
{
    if(n <= 0) {return a;}
    else {return sum_n(n-1, n+a);}

}
int main()
{
    int n,a =0; cin>>n;
    cout<<sum_n(n,a);
}