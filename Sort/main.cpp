#include<iostream>
#include<vector>
#include<typeinfo>
#include<algorithm>

using std::vector;
using std::sort;
using std::cout;
using std::endl;

#define LOG(x) cout << x << "\n";

void sort(vector<int> list)
{
    sort(list.begin(), list.end());
    for (auto& n : list)
    {
        LOG(n);
    }
}
void sort(vector<vector<int>> list)
{
    vector<int> holder;
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list[i].size(); j++)
        {
            holder.push_back(list[i][j]);
        }
    }
    sort(holder.begin(), holder.end());
    for (auto& n : holder)
    {
        LOG(n);
    }
}

int main()
{
    vector<int> list0 = { 1, 2, 3 };
    vector<vector<int>> list1 = { {1, 2, 3}, {4, 5, 6} };
    vector<vector<int>> list2 = { {8, 13, 5}, {7, 12, 0} };
    vector<vector<int>> list3 = { {7, 4, 2}, {66, 7, 420}, {99, 63, -12} };

    sort(list0);
    LOG("-------");
    sort(list1);
    LOG("-------");
    sort(list2);
    LOG("-------");
    sort(list3);
    return 0;
}