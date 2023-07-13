#include "iostream"
#include "algorithm"
#include "vector"
typedef long long ll;
using namespace std;
void print_forward_method_2(int start,int n)
{
    if(start<=n){cout<<start<<" "; print_forward_method_2(start+1, n);}
}
void print_forward(int n)
{
    if(n>0){print_forward(n-1); cout<<n<<" ";}
    else{return;}
}
void print_reverse(int n)
{
    if(n<=0){ return;}
    else{ cout<<n<<" "; print_reverse(n-1);}
}
int main()
{
    int n;
    cin>>n;
    print_reverse(n);
    cout<<"\n";
    print_forward(n);
    cout<<"\n";
    print_forward_method_2(1,n);
    
}