class Solution {
public:
    vector<int> grayCode(int n) {

        int N = 1<<n;

        vector<int>v;
    
    for(int i = 0 ; i < N ; i++){

        int z = i/2;
        v.push_back(i^z);
    }
        return v;
    }
};