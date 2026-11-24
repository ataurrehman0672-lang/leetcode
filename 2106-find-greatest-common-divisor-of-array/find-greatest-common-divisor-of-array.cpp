class Solution {
public:
int gcd(int k, int j){
    int x=min(k,j);
    for(int i=x;i>=1;i--){
        if(k%i==0 && j%i==0){
            return i;

        }
}
return 1;
}
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        return gcd(mini,maxi);
        
    }
};