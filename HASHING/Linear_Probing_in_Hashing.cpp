#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
class Solution
{
    public:
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        // first insert or make a hashmap of -1
        //vector<int> hashTable(hashSize);
        // one more mehtod to make hashmap with -1 values are
        vector<int> hashTable(hashSize, -1);
        // for(int i =0 ; i < hashSize ; i++)
        // {
        //     hashTable[i] = -1;
        // }   
        for(int i =0 ; i < sizeOfArray; i++)
        {
            // generating keys
            int key = arr[i]%hashSize;
            // if the value is -1 the replace -1 with the array value.
            if(hashTable[key] == -1)
            {
                hashTable[key] = arr[i];
            }
            else
            {
                // this count will prevent the loop from running infinitely.
                int count = 0;
                // this will run until the hashtable is filled and the condition
                // will be complete when there will be no -1 or count will become == hashsiz
                // meaning this will fill the table and also will cater the case of duplicates
                // meaning will shift the value forward.
                while(hashTable[key] != -1 || count <= hashSize)
                {
                    if(hashTable[key] == arr[i])
                    {
                        break;
                    }
                    key = (key + 1)%hashSize;
                    count++;
                }
                if(hashTable[key] == -1)
                {
                    hashTable[key] = arr[i];
                }
            }
        }
        return hashTable;

    }
};
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hashSize;
        cin>>hashSize;
        
        int sizeOfArray;
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];

        for(int i=0; i<sizeOfArray; i++)
        {
            cin>>arr[i];
        }
        vector<int> hash;
        Solution obj;
        hash = obj.linearProbing(hashSize, arr, sizeOfArray);

        for(int i=0; i<hashSize; i++)
        {
            cout<<hash[i]<<" "<<endl;
        }
    }
}