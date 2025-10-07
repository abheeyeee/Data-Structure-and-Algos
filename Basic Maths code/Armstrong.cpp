class Solution {
public:
    bool isArmstrong(int n) {
        return(n == arm(n));
    }
    int arm(int n){
        int size = to_string(n).size();
        int sum = 0;
        while(n!=0){
            int ld = n%10;
            sum+= pow(ld,size);
            n/=10;
        }
        return sum;
    }   
};