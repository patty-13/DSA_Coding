#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> nums(n);
    vector<int> nums1(nums.size());
    int best = 0; int max_sum = 0;
    int best1 = 0 ; int max_sum1 = 0;
    int total = 0;
    for(int i = 0; i< nums.size() ; i++)
    {
        cin>>nums[i];
    }
    for(int i = 0 ; i < nums.size() ; i++)
    {
        max_sum = max(nums[i], nums[i] + max_sum);
        best = min(best, max_sum);
        total += nums[i];
    }

    // nums1[0] =  nums[nums.size()-1];
    // for(int  i = 0 ; i < nums.size() ; i++)
    // {
    //     nums1[i+1] = nums[i];

    // }
    //    for(int i = 0 ; i < nums1.size() ; i++)
    // {
    //     max_sum1 = max(nums1[i], nums1[i] + max_sum1);
    //     best1 = max(best1, max_sum1);
    // }
    // for(int i = 0; i < nums1.size() ; i++)
    // {
    //     cout<<nums1[i]<<" ";
    // }
    // cout<<"\n";

    cout<<best<<" "<<best1<<"\n";
    cout<<max(best, best1)<<"\n";
    cout<<total-best;
    // for(int i = 0; i < nums1.size() ; i++)
    // {
    //     cout<<nums1[i];
    // }
    // cout<<nums1[0];

}
