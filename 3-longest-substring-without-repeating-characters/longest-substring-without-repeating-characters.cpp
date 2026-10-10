class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0 , mx = 0 ; 

        unordered_set<char> st;

        
        for( int i =0 ; i < s.size() ; i++){
            
           
           while(st.count(s[i])){
            st.erase(s[left]);
            left ++ ;
           }

           st.insert(s[i]);
           mx = max( mx , (int)st.size() );

        }
        

        
        return mx;
    }
};