class Solution {
public:
         int maxi(int num) {
        string s = to_string(num);
        // Find first non-9 digit and replace all of its occurrences
        for(char c : s) {
            if(c != '9') {
                replace(s.begin(), s.end(), c, '9');
                break;
            }
        }
        return stoi(s);
    }
    
    int mini(int num) {
        string s = to_string(num);
        // Replace all occurrences of first non-zero digit with 0
        for(char c : s) {
            if(c != '0') {
                replace(s.begin(), s.end(), c, '0');
                break;
            }
        }
        return stoi(s);
    }
    int minMaxDifference(int num) {
        int maxi_val = maxi(num);
        int mini_val = mini(num);
        return maxi_val-mini_val;
    }
};