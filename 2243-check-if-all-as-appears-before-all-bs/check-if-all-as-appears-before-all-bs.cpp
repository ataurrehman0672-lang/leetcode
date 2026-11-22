class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        if(n==1 && s[0]=='a') return true;
        int bidx=-1;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                bidx=i;
                flag=true;
                break;
            }
        }
        for(int i=bidx+1;i<n;i++){
            if( flag && s[i]=='a') return false;
        }
     
        return true;
    }
};