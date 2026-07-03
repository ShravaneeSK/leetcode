class Solution {
public:
    int reverse(int x) {
        
        long long revn=0;

        while(x!=0){
            int lastd=x%10;

            revn=revn*10+lastd;

            x=x/10;
        }
        if (revn > INT_MAX || revn < INT_MIN)
            return 0;

        return (int)revn;
    }
    
};