class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char ,int> mp;
        int a=s.size();
        int left=0;
        int maxlength=0;
        for(int r=0;r<a;r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[left]]--;
                left++;
            }
            maxlength=max(maxlength,r-left+1);
        }
        return maxlength;
    }
};
