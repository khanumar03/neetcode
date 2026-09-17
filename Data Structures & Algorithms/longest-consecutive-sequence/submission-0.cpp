class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = min(1, n);
        int len = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i - 1] + 1 == nums[i]) len++;
            else if(nums[i - 1] != nums[i]) len = 1;

            ans = max(ans, len);
        }

        return ans;
    }
};


