class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        
        vector<int>pref(n+1,0);
        pref[0]=0;
        for(int i=1;i<=n;i++)
        {
pref[i]=pref[i-1]+nums[i-1];
        }


int ans=INT_MAX;
bool flag=false;


       for(int i=0;i<n;i++){
           int sum=-1;
               
        for(int j=i;j<n;j++){
            
            if(j-i+1>=l && j-i+1<=r){
                if(i==j) sum=nums[i];
                
              else if(i!=0){
                     sum=pref[j+1]-pref[i];
                }
                else if(i==0){
                    sum=pref[j+1];
                }
            }
            if(sum>0){
                flag=true;
                cout<<"hi";
ans=min(ans,sum);
                
            }

            
            
        }
       }
       if(flag==false) return -1;
       
        return ans;
    }
};