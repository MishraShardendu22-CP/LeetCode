class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for (auto& i : s) {
            if (mp.find(i) == mp.end()){
                mp[i] = 0;
            }
            mp[i] += 1;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]] >= 3){
                mp[s[i]] -= 2;
            }
        }
        int res = 0;
        for(auto& i: mp){
            res += i.second;
        }
        return res;
    }
};