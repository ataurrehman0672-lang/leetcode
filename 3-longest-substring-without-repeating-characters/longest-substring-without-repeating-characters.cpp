class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int n=nums.size();
        int i=0;
        int j=0;
unordered_map<char,int>freq;
        int ans=0;

        while(j<n){
            freq[nums[j]]++;

            while(freq[nums[j]]>1 && freq[nums[i]]>0){
               
                freq[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);



j++;





        }
        return ans;
    }
};