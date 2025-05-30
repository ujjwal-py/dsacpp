class Solution {
public:
    void solve(int ind, int target, vector<int>&ds, vector<int>&arr, vector<vector<int>>&ans){
        if ( ind == arr.size()) {
            if (target == 0) ans.push_back(ds);
            return;
        }
        // take
        if (arr[ind] <= target) {
            ds.push_back(arr[ind]);
            solve(ind,target-arr[ind], ds, arr, ans);
            ds.pop_back();
        }

        //not take
        solve(ind + 1,target, ds, arr, ans);
    }
    vector<vector<int>> combinationSum(vector<int>arr, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        solve(0, target, ds, arr, ans);
        return ans;
    }
};