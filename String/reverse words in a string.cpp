class Solution {
public:
string ans="";
string str="";
stack<string>st;
    string reverseWords(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){

                if(ans!="")st.push(ans);
                ans="";
            }
            else ans+=s[i];

        }
        st.push(ans);
        while(!st.empty()){
            str+=st.top();
            str+=' ';
            st.pop();
        }
        str.pop_back();
        if(str[0]==' ') str.erase(0,1);
        return str;
    }
};
