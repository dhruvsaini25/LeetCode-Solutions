class Solution {
public:
    string frequencySort(string s) {
        //brute force
        unordered_map<char,int> freq;
        for (char c:s){
            freq[c]++;
        }
        vector<pair<char,int>> freqvec(freq.begin(), freq.end());
        sort(freqvec.begin(), freqvec.end(), [](pair<char,int>&a, pair<char,int>&b){
            return a.second>b.second;
        });
        string result="";
        for (auto &p:freqvec){
            result+=string(p.second, p.first);
        }
        return result;
    }
};