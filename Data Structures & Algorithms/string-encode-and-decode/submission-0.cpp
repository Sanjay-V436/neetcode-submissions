class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string word : strs) {
            result += to_string(word.size());
            result += "#";
            result += word;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size()){
            string len="";
            while(s[i]!='#'){
                len+=s[i];
                i++;
            }
            int l=stoi(len);
            i++;
            string word=s.substr(i,l);
            ans.push_back(word);
            i+=l;
        }
        return ans;
    }
};
