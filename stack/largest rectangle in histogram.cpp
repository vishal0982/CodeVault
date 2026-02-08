class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int ans=0;
        int n=heights.size();
        for(int i=0;i<heights.size();i++){
            while(!st.empty()&&heights[i]<heights[st.top()]){
                int val= st.top();
                st.pop();
                if(!st.empty()){
                ans=max(ans,((i-st.top()-1)*heights[val]));}
                else{
                     ans=max(ans,((i*heights[val])));
                }
            }
                st.push(i);
            
        }
        while(!st.empty()){
            int val= st.top();
                st.pop();
                if(!st.empty()){
                ans=max(ans,((n-st.top()-1)*heights[val]));}
                else{
                     ans=max(ans,(n*heights[val]));
                }
             
        }
        return ans;
    }
};
