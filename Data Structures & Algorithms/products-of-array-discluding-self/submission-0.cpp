class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n + 1, 1);
        vector<int> s(n + 1, 1);

        for(int i = 1; i <= n; i++) p[i] = nums[i - 1] * p[i - 1];
        for(int i = n - 1; i >= 0; i--) s[i] = nums[i] * s[i + 1];

        for(int i = 0; i < n; i++)
            nums[i] = p[i] * s[i + 1];

        return nums;
    }
};