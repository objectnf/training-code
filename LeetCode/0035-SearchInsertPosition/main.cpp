#include <cstdio>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty() || nums.back() < target)
            return nums.size();
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = (left + right)/2;
            if (nums[mid] >= target)
                right = mid;
            else
                left = mid + 1;
        }
        return right;
    }
};

int main() {
    vector<int> data = {1, 3, 5, 6};
    auto k = new Solution;
    printf("%d", k->searchInsert(data, 4));
    return 0;
}