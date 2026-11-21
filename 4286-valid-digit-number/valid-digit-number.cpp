class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
       
        int cnt=0;
        while(n){
            int dig=n%10;
            if(dig==x) cnt++;
            n=n/10;
            if(n==0 && dig==x) return false;







        }
        if(cnt>0) return true;
        return false;
    }
};