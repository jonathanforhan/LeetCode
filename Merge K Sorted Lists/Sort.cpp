#include<iostream>
#include<vector>
#include<set>

using std::cout;
using std::endl;
using std::set;

#define LOG(x) cout << x << endl;

int main()
{
    set<int> z;
    z.insert(1);
    z.insert(2);
    z.insert(3);
    z.insert(66);
    z.insert(89);
    z.insert(22);
    z.insert(67);
    z.insert(0);

    for (int i = 0; i < 99; i++)
    {
        if (z.count(i))
        {
            LOG("Found " << i);
        }
    }

    return 0;
}