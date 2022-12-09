#include<vector>
#include<set>
#include<iostream>
#include<algorithm>

using std::vector;
using std::set;
using std::cout;

#define log(x) cout << x << '\n';

int removeDuplicates(vector<int>& nums) {
    auto k = std::unique(nums.begin(), nums.end());
    return k - nums.begin();
}

int main() {
    vector<int> vec = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};

    for (auto& n : vec) {
        log(n);
    }
}