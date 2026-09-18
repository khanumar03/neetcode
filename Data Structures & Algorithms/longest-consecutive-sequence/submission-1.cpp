class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_set<int> _nums;
        unordered_map<int, int> mp;

        for (int num : nums) _nums.insert(num);

        for (int num : _nums) {
            int l = mp[num - 1];
            int r = mp[num + 1];
            mp[num] = l + 1 + r;
            mp[num - l] = mp[num];
            mp[num + r] = mp[num];
            ans = max(ans, mp[num]);
        }

        return ans;
    }
};