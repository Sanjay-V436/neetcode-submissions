class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=numbers.size();
        int left=0;
        int right=s-1;
        vector <int> ans;
        while(left<right){
            int t=numbers[left]+numbers[right];
            if(t==target){
                return{left+1,right+1};
            }
            else if(t>target){
                right--;
            }
            else{
                left++;
            }

        }
        return {};
    }
};
