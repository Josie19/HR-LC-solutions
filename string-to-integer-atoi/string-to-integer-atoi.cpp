class Solution {
public:
    int myAtoi(string str){
        if (str.empty()) return 0;
        str += '.';
        long long res = 0;
        int sign = 1;
        size_t i = str.find_first_not_of(" ");
        if (i != string::npos and str[i] == '-' or str[i] == '+') {
            sign = str[i++] == '-' ? -1 : 1;
        }
        while (i != string::npos and isdigit(str[i])) {
            res = (res * 10) + (str[i++] - '0');
            if (res * sign > INT_MAX) return INT_MAX;
            if (res * sign < INT_MIN) return INT_MIN;
        }
        return res * sign;
    }

};

