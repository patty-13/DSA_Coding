#include "bits/stdc++.h"
using namespace std;
int coin_change(vector<int> &a, int n, int sum)
{
    if(sum == 0)
    {
        return 1;
    }
    if(sum < 0)
    {
        return 0;
    }
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return coin_change(a, n, sum - a[n-1]) + coin_change(a, n- 1, sum);
    }
}
int main()
{
     // two thing to consider while solving coin problem
     // how to reduce it to subproblems, right first is
     // 
     int n,sum;
     cin>>n>>sum;
     vector<int> a(n);
     for(int i = 0; i < n ; i++)
     {
        cin>>a[i];
     }
     cout<<coin_change(a,n,sum);
     
}

{"prompt":"Samsung Galaxy Feel\nThe Samsung 
Galaxy Feel is an Android smartphone developed
 by Samsung Electronics exclusively for the 
 Japanese market. The phone was released in 
 June 2017 and was sold by NTT Docomo. 
 It runs on Android 7.0 (Nougat), has a 4.7 
 inch display, and a 3000 mAh battery
 .\nSoftware\nSamsung Galaxy Feel runs on Android 7.0 
 (Nougat), but can be later updated to Android 8.0 (Oreo)
 .\nHardware\nSamsung Galaxy Feel has a 4.7 inch Super AMOLED 
 HD display, 16 MP back facing and 5 MP front facing 
 cameras. It has a 3000 mAh battery, a 1.6 GHz 
 Octa-Core ARM Cortex-A53 CPU, and an ARM Mali-T830 
 MP1 700 MHz GPU. It comes with 32GB of internal 
 storage, expandable to 256GB via microSD. Aside 
 from its software and hardware specifications,
  Samsung also introduced a unique a hole in
   the phone's shell to accommodate the Japanese 
   perceived penchant for personalizing their 
   mobile phones. The Galaxy Feel's battery was 
   also touted as a major selling point since 
   the market favors handsets with longer battery life.
    The device is also waterproof and supports 1seg 
    digital broadcasts using an antenna that is sold 
    separately.\n\n###\n\n", 
    "completion":"Looking for a 
    smartphone that can do it all? Look no further than
     Samsung Galaxy Feel! With a slim and sleek design,
      our latest smartphone features high-quality 
      picture and video capabilities, as well as 
      an award winning battery life. END"}