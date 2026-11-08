class Solution {
public:
int dp[1001];
int fxn(vector<int>& nums, int i){
    if(i>=nums.size()) return 0;
if(dp[i]!=-1) return dp[i];
    int a=nums[i]+fxn(nums,i+1);
    int b=nums[i]+fxn(nums,i+2);
    return dp[i]=min(a,b);
}
    int minCostClimbingStairs(vector<int>& nums) {
memset(dp,-1,sizeof(dp));
        return min(fxn(nums,0),fxn(nums,1)) ;
        
    }
};