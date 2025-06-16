class Solution {
public:
    void solve(int ind, vector<int>&nums, set<vector<int>>&s) {
        if (ind == nums.size()) {
            s.insert(nums);
            return;
        }
        for (int i = ind; i < nums.size();i++) {
            // if (i != ind && nums[i] == nums[i-1]) continue;
            swap(nums[ind], nums[i]);
            solve(ind+1, nums, s);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>s;
        solve(0, nums, s);
        vector<vector<int>>ans(s.begin(), s.end());
        return ans;
    }
};