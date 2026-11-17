class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length()-1;
       long long count{};
       while(s[len] == ' '){
        len--;
       }
        for(int i=len;i>=0&&  s[i]!=' ' ; i--){
         count++;
        }
        return count; 
    }
};