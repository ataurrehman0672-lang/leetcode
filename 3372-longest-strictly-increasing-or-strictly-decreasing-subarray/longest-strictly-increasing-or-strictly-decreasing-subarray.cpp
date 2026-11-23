class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
                ans=max(ans,cnt);
            }
            else{
                cnt=1;
            }
        }

int cnt2=1;
int ans2=1;
         for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                cnt2++;
                ans2=max(ans2,cnt2);
            }
            else{
                cnt2=1;
            }
        }
        return max(ans2,ans);
    }
};