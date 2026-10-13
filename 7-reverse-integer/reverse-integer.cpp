class Solution {
public:
    int reverse(int x) {


        string s = to_string(x);


        bool chk_neg = false;
        if (s[0] == '-') {
            chk_neg = true;
            s = s.substr(1); 
        }


        std::reverse(s.begin(), s.end()); 


        long long y = stoll(s);

        if (chk_neg) y = -y;


        if (y > INT_MAX || y < INT_MIN) {
            return 0;
        }

        return (int) y;
    }
};