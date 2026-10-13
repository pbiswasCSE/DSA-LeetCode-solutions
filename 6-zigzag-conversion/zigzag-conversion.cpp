class Solution {
public:
    string convert(string s, int numRows) {

        vector<string> rows(numRows);

        for(int i = 0 ; i < s.size() ; i++){

            int row = 0 ;

            if(numRows > 1){ int cycle = 2*(numRows-1);

            int r = i % cycle ;

             row = min (r, cycle -r );

            }

            rows[row]+=s[i];
        }

        string result = "";
        for (const string& row : rows) { 
         result += row;
        }

        return result ;
    }
};