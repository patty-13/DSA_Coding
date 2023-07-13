#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> a(n);
    int best_count = 0;
    int best =0;
    set<int> s;
    for(int i = 0 ; i < n ; i++) {cin>>a[i];}
    for(int i = 0 ; i < n-2 ; i++)
    {
        s.insert(a[i]);s.insert(a[i+1]);s.insert(a[i+2]);
        cout<<s.size()<<"\n";
        if(s.size() == 2)
        {
            best_count++;
            best = max(best, best_count);

        }
        else if (s.size() == 3)
        {
            s.clear();
            best_count =0;
        }
        
    }
    cout<<best + 2<<"\n";
 
}