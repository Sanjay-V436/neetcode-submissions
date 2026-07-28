class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char ,int> mp;
        int left=0;
        int maxf=0;
        int ans=0;
        int si=s.size();
        for(int r=0;r<si;r++){
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            while((r-left+1)-maxf>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,r-left+1);
        }
        return ans;
    }
};
