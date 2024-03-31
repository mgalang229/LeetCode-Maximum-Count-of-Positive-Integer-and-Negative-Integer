class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int neg = 0, pos = n + 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg = i + 1;
            } else if (nums[i] > 0 && pos == n + 1) {
                pos = i + 1;
            }
        }
        return max(neg, n - pos + 1);
    }
};
