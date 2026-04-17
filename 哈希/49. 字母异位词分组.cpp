class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            /*
                用map存下这个字符串排序后的结果，和原来的字符串
            */
            unordered_map<string, vector<string>> mp;
            for (auto s: strs) {
                string bs = s;
                sort(s.begin(), s.end());
                mp[s].push_back(bs);
            }
            vector<vector<string>> res;
            for (auto [k, v]: mp) {
                res.push_back(v);
            }
            return res;
        }
    };