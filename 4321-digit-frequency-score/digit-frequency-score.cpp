class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>nums;
        while(n){
            int dig=n%10;
            nums.push_back(dig);
            n=n/10;
        }
        unordered_map<int,int>freq;
        for(auto it:nums){
            freq[it]++;
        }
        int ans=0;
        for(auto it:freq){
            ans+=(it.first*it.second);
        }
        return ans;
        
    }
};