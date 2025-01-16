class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        int temp = 0;
        if(n & 1){
            for(int& i : nums2){
                temp = temp ^ i;
            }
        }
        
        if(m & 1){
            for(int& i : nums1){
                temp = temp ^ i;
            }
        }

        return temp;
    }
};

// TLE
// class Solution {
// public:
//     int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;

//         int atemp = 0;
//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 temp = temp ^ (nums1[i] ^ nums2[j]);
//             }
//         }
//         return temp;
//     }
// };