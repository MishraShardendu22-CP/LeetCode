class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> st;
        for(auto& i : nums){
            if(i == 0){
                continue;
            }
            st.insert(i);
        }
        return st.size();
    }
};