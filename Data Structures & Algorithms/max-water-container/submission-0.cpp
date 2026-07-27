class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s,t;
        int left=0;
        int right=heights.size()-1;
        int maxArea=0;
        while(left<right){
            int a=min(heights[left],heights[right]);
            t=right-left;
            s=a*t;
            if(maxArea<s){
                maxArea=s;
            }
            if(heights[left]<heights[right]){
            left++;}
            else{
            right--;}
        }
        return maxArea;
    }
};
