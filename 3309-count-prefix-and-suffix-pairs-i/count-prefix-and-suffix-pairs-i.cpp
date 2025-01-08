class Solution {
public:
    bool solve(string& one, string& two) {
        int n = one.size();
        int m = two.size();
        
        if (n > m) {
            return false;
        }

        if (one != two.substr(0, n)) {
            return false;
        }

        if (one != two.substr(m - n, n)) {
            return false;
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int res = 0;

        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (solve(words[i], words[j])) {
                    res += 1;
                }
            }
        }
        return res;
    }
};
