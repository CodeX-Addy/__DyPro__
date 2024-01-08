class Solution {
public:

    //Using recursion only(Brute force)
    int solve(vector<int>& nums, int size, int ind){
        if(ind>=size){
            return 0;
        }

        //If robbed
        int opt1 = nums[ind] + solve(nums, size, ind+2);

        //if not robbed
        int opt2 = 0 + solve(nums, size, ind+1);
        
        int ans = max(opt1, opt2);
        return ans;

    }

    //Using top down approach(Memoization)
    int solveusingmem(vector<int> nums, int i, vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }

        if(dp[i]!=-1) return dp[i];

        //If robbed
        int opt1 = nums[i] + solveusingmem(nums, i+2, dp);

        //if not robbed
        int opt2 = 0 + solveusingmem(nums, i+1, dp);
        
        dp[i] = max(opt1, opt2);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        int ind = 0;

        //return solve(nums, size, ind);
        vector<int> dp(n+1, -1);
        return solveusingmem(nums, ind, dp);
    }
};
