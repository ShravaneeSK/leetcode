class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;//make maps
        unordered_map<char,int> m2;

        if(s.size() != t.size())//to cancel invalid
        return false;

        for(int i=0;i<s.size();i++){
            m1[s[i]]++;//count//traverse from left to right
            m2[t[i]]++;//traverse from right left


        }
        if(m1==m2)
        return true;
        else
        return false;

        
    }
};