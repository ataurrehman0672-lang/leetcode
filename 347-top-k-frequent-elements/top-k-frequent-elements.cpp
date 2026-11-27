class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
       unordered_map<int,int>freq;
       for(auto it:nums){
        freq[it]++;}

      while(k--){
        int maxi=INT_MIN;
        int idx=-1;
        for(auto it:freq){
            if(it.second>maxi){
                maxi=it.second;
                idx=it.first;
            }
        }
         ans.push_back(idx);
          freq[idx]=-1;










      } 


       
  return ans;
        
    }   
    
};