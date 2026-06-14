class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){
            ans = ans ^ val;//xor gate n^n=o, n^0=n
        }
        return ans;
    }
};