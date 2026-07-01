class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>freq1;
        unordered_map<char , int>freq2;
        for(char ch:s){
            freq1[ch]++;
        }
        for(char ch1:t){
            freq2[ch1]++;
        }
        if(freq1==freq2){
            return true;
        }
        else{
            return false;
        }
    }
};
