#include "iostream"
#include "vector"
#include "unordered_map"
#include "unordered_set"
using namespace std;
void quadratic_probing(vector<int> &a, int hashSize)
{
    unordered_map<int,int> h;
    for(int i = 0 ; i < a.size() ;i++)
    {
        h[i] = -1;
    }
    for(int i = 0; i < a.size(); i++)
    {
        int key = a[i]%hashSize;
        if(h[key] != -1)
        {
            int j = (key + i*i)%hashSize;
            int count =0 ;
            while(h[key] != -1 || count<hashSize)
            {
                if(h[key] == a[i])
                {
                    break;
                }
                else
                {
                    count++;
                    j = (key + i*i)%hashSize;
                }
            }
        }
        else
        {
            h[key] = a[i];
        }
    }
}
int main()
{
    int t,hashSize;
    cin>>t>>hashSize;
    vector<int> a(t);
    quadratic_probing(a, hashSize);
}