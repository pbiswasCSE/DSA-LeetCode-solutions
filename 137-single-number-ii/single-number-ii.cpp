//solution By Mapping 

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int>freq;

        int one = 0;

        for(int i =0 ; i < nums.size() ; i++){
          
          freq[nums[i]]++;
        }
        for(auto it : freq){
            if(it.second == 1){
                one = it.first;
                break;
            }
        }
        return one ;
    }
};