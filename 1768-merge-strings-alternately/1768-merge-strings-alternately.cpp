class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int m=min(word1.size(),word2.size());
        for(int i=0; i<m; i++){
            ans=ans+word1[i]+word2[i];
        }

        if(word1.size()<word2.size()){
            ans+=word2.substr(word1.size());
        }

        if(word1.size()>word2.size()){
            ans+=word1.substr(word2.size());
        }
        return ans;
    }
};