#include "bits/stdc++.h"
using namespace std;
int fact_method_2(int n, int a)
{
    // makes the factorial method into tail recursive
    if(n==0){return a;}
    else{return fact_method_2(n-1,n*a);}
}
int fact(int n)
{
    // it is not tail recursive method.
    if(n == 0 ){return 1;}
    else{ return n*fact(n-1);}
}
int main()
{
    int n, a=1; cin>>n;
    cout<<fact(n);
    cout<<"\n";
    cout<<fact_method_2(n,a);
}
