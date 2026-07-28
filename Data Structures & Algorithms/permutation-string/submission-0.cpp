class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        if(s1.size()>s2.size()){
            return false;
        }
        int left=0;
        for(char c:s1){
            a[c]++;
        }
        int window=s1.size();
        for(int i=0;i<s1.size();i++){
            b[s2[i]]++;
        }
        if(a==b){
            return true;
        }
        for(int r=window;r<s2.size();r++){
            b[s2[r]]++;
            b[s2[left]]--;
            if(b[s2[left]]==0){
                b.erase(s2[left]);
            }
            left++;
            if(a==b){
                return true;
            }
        }
        return false;
    }
};
