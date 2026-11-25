class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int x=trust.size();
        vector<int>indeg(n+1,0);
        vector<int>outdeg(n+1,0);
        for(int i=0;i<x;i++){
            int u=trust[i][0];
            int v=trust[i][1];
            indeg[v]++;
            outdeg[u]++;

        }
        for(int i=1;i<=n;i++){
            if(indeg[i]==n-1 && outdeg[i]==0){
                return i;
            }
        }
        return -1;
    }
};