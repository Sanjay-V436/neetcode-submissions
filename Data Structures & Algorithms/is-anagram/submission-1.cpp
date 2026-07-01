class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char , int>freq1;
        unordered_map<char , int>freq2;
        for(char ch:s){
            freq1[ch]++;
        }
        for(char ch1:t){
            freq2[ch1]++;
        }
        return(freq1==freq2);
        
    }
};
