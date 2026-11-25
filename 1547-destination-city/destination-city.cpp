class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
       unordered_map<string,int>outdeg;
        for(auto it : paths){
            string u=it[0];
           outdeg[u]++;
         


        }


     for(auto it:paths){
        string v=it[1];
        if(outdeg.find(v)==outdeg.end()){
            return v;
        }
      
        
     }







        return "";
    }
};