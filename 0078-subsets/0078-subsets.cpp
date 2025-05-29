class Solution {
public:
    void sub(int ind,vector<int>&nums,vector<int>&ds, int n, vector<vector<int>>&ans) {
        if (ind == n) {
            ans.push_back(ds);
            return;
        }
        //not take
        sub(ind + 1, nums, ds, nums.size(), ans);

        //take
        ds.push_back(nums[ind]);
        sub(ind + 1, nums, ds, nums.size(), ans);
        ds.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sub(0,nums,ds,nums.size(),ans);
        return ans;
        
        
    }
};