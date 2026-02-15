class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int count =0;
        bool a=1;
        for(int i=0;i<num.size();i++){
            if(num[i]%2!=0){
                count =i;
                a=0;
                
            }
        }

        if(count ==0&& a)return ans;
        else{
            for(int i=0;i<=count ;i++){
                ans+=num[i];
            }
        }
        return ans;
    }
};
