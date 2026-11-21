class Solution {
public:
    int minRange(int a, int b, int c) {
        if(a>b+c){
            a=b+c;        }
            else if(b>a+c){
                b=a+c;
            }
            else if(c>a+b){
                c=a+b;
            }
            return max(a,max(b,c))-min(a,min(b,c));
        
    }
};