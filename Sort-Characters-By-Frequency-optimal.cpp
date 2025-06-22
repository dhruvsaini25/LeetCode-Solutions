class Solution {
public:
    string frequencySort(string s) {
        //optimal approach using  bucket sort
        unordered_map<char,int> freq;
        for (char c:s){
            freq[c]++;
        }
        int maxfreq=s.size();
        vector<vector<char>> buckets(maxfreq+1);
        for (auto &entry:freq){
            buckets[entry.second].push_back(entry.first);
        }
        string result="";
        for (int i=maxfreq;i>=1;i--){
            for (char c:buckets[i]){
                result+=string(i,c);
            }
        }
        return result;
    }
};