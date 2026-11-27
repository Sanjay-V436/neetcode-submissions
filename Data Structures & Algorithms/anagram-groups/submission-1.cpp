class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> a;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            a[key].push_back(s);
        }
        for(auto p:a){
            ans.push_back(p.second);
        }
        return ans;
    }
};
