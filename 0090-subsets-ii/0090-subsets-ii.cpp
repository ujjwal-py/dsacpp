class Solution {
public:
    void solve(int ind, vector<int>&ds, vector<int>&nums, set<vector<int>>&ans) {
        if (ind == nums.size()) {
            ans.insert(ds);
            return;
        }

        // not take
        solve(ind+1, ds, nums, ans);

        //take
        ds.push_back(nums[ind]);
        solve(ind+1, ds, nums,ans);
        ds.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        set<vector<int>>ans;
        sort(nums.begin(), nums.end());
        solve(0, ds, nums, ans);
        vector<vector<int>>v(ans.begin(), ans.end());
        return v;
    }
};