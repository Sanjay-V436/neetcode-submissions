class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(auto str:strs){
            result+=to_string(str.size());
            result+='#';
            result+=str;
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
