class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int i:nums){
            if(x.find(i)!=x.end()){
                return true;
            }
            x.insert(i);
        }
        return false;
    }
};