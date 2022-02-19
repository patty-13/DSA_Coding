#include "iostream"
#include "math.h"
#include "algorithm"
#include "map"
using namespace std;
typedef long long ll;
struct open_addressing
{
    int *arr;
    int m, size;
    open_addressing(int value)
    {
        m = value;
        size = 0;
        for(int i = 0; i<m; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key%m;
    }

    bool search(int key)
    {
        int h = hash(key);
        int  i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
                return true;
            i = (i+1)%m;
            if( i == h)
                return false;
        }
        return false;
    }
    bool insert(int key)
    {
        int h = hash(key);
        int i = h;
        if (size == m)
        {
            return false;
        }
        while(arr[i] != -1 && arr[i] != -2  && arr[i] != key)
        {
            i = (i + 1)%m;
            if(arr[i] == key)
            {
                return false;
            }
            else
            {
                arr[i] = key;
                size++;
                return true;
            }
        }
    }
    bool erase(int key)
    {
        // step 1 always finding the key
        int h = hash(key);
        int i = h;
        while(arr[i] != -1)
        {
            if(arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i+1)%m;
            if (i == h)
            return false;

        }
        return false;
        
    }




};

int main()
{

}
