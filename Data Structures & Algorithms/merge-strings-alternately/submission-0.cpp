class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int s=max(word1.size(),word2.size());
        int left=0;
        int right=0;
        for(int i=0;i<s;i++){
            if(left<word1.size()){
                ans=ans+word1[i];
                left++;
            }
            if(right<word2.size()){
                ans=ans+word2[i];
                right++;
            }
        } 
        return ans;
        
    }
};