class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        vector<int> ans;
        for(auto p:nums){
            freq[p]++;
        }
        vector<pair<int,int>> v;
        for(auto p:freq){
            v.push_back({p.second,p.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
