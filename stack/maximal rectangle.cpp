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



    int maximalRectangle(vector<vector<char>>& matrix) {
        stack<int> st;
        int ans=0;
        int row=matrix.size();
        int col=matrix[0].size();
         vector<int> height(col,0);
        for(int i=0;i<row;i++){
            for( int j=0;j<col;j++){
               if(matrix[i][j]=='0'){
                height[j]=0;
               }
               else{
                height [j]+=1;
               }}
                ans=max(ans,largestRectangleArea(height));
            
        }
       return ans; 
    }
};
