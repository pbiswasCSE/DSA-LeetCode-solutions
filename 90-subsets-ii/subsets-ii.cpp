//Subset || 
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

         sort(nums.begin(),nums.end());
         vector<vector<int>>v;

        int n=nums.size();

        for(int i =0 ; i < (1<<n) ; i++){

            vector<int> subset; 

            for(int j = 0 ; j < n ; j++){

                if( i & (1<<j)){
                    subset.push_back(nums[j]);
                }

            }

            v.push_back(subset);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());

        return v;

    }
};