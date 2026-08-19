class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map <int ,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        int thres=n/3;
        vector<int> ans;
        for(auto it:mp){
            if(it.second>thres){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};