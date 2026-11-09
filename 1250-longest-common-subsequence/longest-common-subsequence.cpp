class Solution {
public:
int dp[1001][1001];
int fxn(string &str1, string &str2,  int n, int m){
    if(n==0 || m==0){
        return 0;
    }
    if(dp[n][m]!=-1) return dp[n][m];
    if(str1[n-1]==str2[m-1]){
        return 1+fxn(str1,str2,n-1,m-1);
    }
    

        int a=fxn(str1,str2,n-1,m);
        
        int b=fxn(str1,str2,n,m-1);




    
    return dp[n][m]=max(a,b);
}
    int longestCommonSubsequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
memset(dp,-1,sizeof(dp));
        return fxn(str1,str2,n,m);
        
    }
};