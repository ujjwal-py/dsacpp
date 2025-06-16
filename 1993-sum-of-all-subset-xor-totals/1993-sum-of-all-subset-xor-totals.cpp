class Solution {
public:
    void subsets(int ind, int sum, vector<int>&nums,vector<int>&s) {
        if (ind == nums.size()) {
            // for (int i : ds) sum = sum^i;
            s.push_back(sum);
            sum = 0;
            return;
        }

        // not take 
        subsets(ind + 1,sum, nums, s);

        //take
        // ds.push_back()
        // sum = sum^nums[i];
        subsets(ind+1,sum^nums[ind], nums, s);

    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>s;
        subsets(0, 0, nums, s);
        int ans = 0;
        for (int i : s) {
            ans+=i;
        }
        return ans;
        
    }
};