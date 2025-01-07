class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_map<string, bool> mp;

        for (auto& i : words) {
            mp[i] = false;
        }

        vector<string> ans;
        for (auto& it : mp) {
            for (int i = 0; i < words.size(); i++) {
                if (it.first == words[i]) {
                    continue;
                } else {
                    if (words[i].find(it.first) != string::npos) {
                        ans.push_back(it.first);
                        break
                        ;
                    }
                }
            }
        }
        return ans;
    }
};
