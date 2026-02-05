class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(char c : s) m[c]++;

        int ans = 0;
        bool odd = false;

        for(auto x : m){
            ans += (x.second / 2) * 2;
            if(x.second % 2) odd = true;
        }

        if(odd) ans++;
        return ans;
    }
};
