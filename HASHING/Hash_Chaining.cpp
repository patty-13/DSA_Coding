#include "iostream"
#include "list"
#include "algorithm"

using namespace std;
struct hash_chaining
{
    int bucket;
    list<int> *table;
    hash_chaining(int b)
    {
        bucket = b;
        table = new list<int>[bucket];
    }
    void insert(int key)
    {
        int h = key%bucket;
        table[h].push_back(key);
    }
    void erase(int key)
    {
        int h = key%bucket;
        table[h].remove(key);
    }
    bool search(int key)
    {
        int h = key%bucket;
        for (auto x: table[h])
        {
            if(h == key)
            {
                return true;
            }
            return false;
        }
    }

};
int main()
{
    hash_chaining h1(7);
    h1.insert(10);
    h1.insert(20);
    h1.insert(15);
    

}