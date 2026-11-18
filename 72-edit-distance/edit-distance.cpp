class Solution {
public:
int dp[501][501];
int fxn(string& word1, string& word2, int i, int j){

    if(i<0){
        return j+1;
    }
    if(j<0){
        return i+1;

    }
if(dp[i][j]!=-1) return dp[i][j];
    if(word1[i]==word2[j]){
        return fxn(word1,word2,i-1,j-1);
    }
    else{


    int insert= 1+fxn(word1,word2,i-1,j);
    int replace=1+fxn(word1,word2,i-1,j-1);
    int del=1+fxn(word1,word2,i,j-1);

    return dp[i][j]= min(insert,min(replace,del));









    }














}
    int minDistance(string word1, string word2) {
memset(dp,-1,sizeof(dp));
        int n=word1.size();
        int m=word2.size();


        return fxn(word1,word2,n-1,m-1);        
    }
};