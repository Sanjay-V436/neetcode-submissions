class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int count=0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int c=x;
                int a=1;
                while(st.find(c+1)!=st.end()){
                    c++;
                    a++;

                }
                count=max(count,a);
            }

        }
        return count;
        

    }
};
