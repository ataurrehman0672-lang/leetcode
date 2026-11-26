class Solution {
public:
    bool canAliceWin(int n) {
      
       int a=0;
       int b=0;
        int num=10;
        
        while(n>=num){
             n-=num;
           
  if(num%2==0) a++;
   else b++;
 
          
          
           
            num--;
            
        }
        return a>b;
    }
};