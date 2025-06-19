class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //optimal approach
        if (s.length() != t.length()) return false;
        int mapS[265]={0};
        int mapT[265]={0};
        for (int i=0;i<s.length();i++){
            if (mapS[s[i]]!=mapT[t[i]]) return false;
            mapS[s[i]]=i+1;
            mapT[t[i]]=i+1;
        }
        return true;
    }
};