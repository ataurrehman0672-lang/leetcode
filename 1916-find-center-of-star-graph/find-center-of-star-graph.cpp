class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int n=edges.size();
       int cnt=0;
       int a=edges[0][1];
       int b= edges[0][0];

      if(edges[1][1]==a || edges[1][0]==a){
        return a;
      }
      else{
        return b;
      }
        
    }
};