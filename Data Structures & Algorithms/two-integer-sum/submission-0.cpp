class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            int c = target-nums[i];
            if(s.find(c)!=s.end()){
                return {s[c],i};
            }
            s[nums[i]] = i;
        }
        return {};
    }
};
