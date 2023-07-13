#include "iostream"
#include "vector"
#include "map"
using namespace std;
int main()
{
    vector<int> m(256,-1);
    string s;
    cin>>s;
    //int dict[256] = {-1};
    int maxLen = 0, start = -1;
    for(int i = 0; i < s.length(); i++)
    {
        cout<<"m:"<<m[s[i]]<<"\n";
        if(m[s[i]] > start)
        {
            start = m[s[i]];
            cout<<"START:"<<start<<"\n";
        }
        m[s[i]] = i;
        cout<<"m is :  "<<m[s[i]]<<"\n";
        maxLen = max(maxLen, i - start);
    }
    cout<<maxLen<<"\n";
}