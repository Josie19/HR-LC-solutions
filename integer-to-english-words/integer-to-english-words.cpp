/*
BEGIN
    ITERATIVE
        1. DECLARE LEN AS NUM.SIZE
            SIZE 2, PRINT FIRST_NUM W/-TY SUFFIX + LAST_NUM
            SIZE 3, PRINT FIRST_NUM + HUNDRED + SIZE 2
END
*/
class Solution {
public:
unordered_map<int, string>intToStr = {{1, "One "}, {2, "Two "}, {3, "Three "}, {4, "Four "}, {5, "Five "},
     {6, "Six "}, {7, "Seven "}, {8, "Eight "}, {9, "Nine "}, {10, "Ten "}, {11, "Eleven "}, {12, "Twelve "},
     {13, "Thirteen "}, {14, "Fourteen "}, {15, "Fifteen "}, {16, "Sixteen "}, {17, "Seventeen "},
     {18, "Eighteen "}, {19, "Nineteen "}, {20, "Twenty "}, {30, "Thirty "}, {40, "Forty "}, {50, "Fifty "},
     {60, "Sixty "}, {70, "Seventy "}, {80, "Eighty "}, {90, "Ninety "},
     {1000, "Thousand "}, {1000000, "Million "}, {1000000000, "Billion "}};
    
    string uptoThreeDigitStr(int num)
    {
        string res;
        if (num >= 100) {
            res += intToStr[num/100];
            res += "Hundred ";
            num %= 100; 
        }
        if (intToStr.find(num) != intToStr.end()) {
            res += intToStr[num];
        } else {
            int rem = num % 10;
            res += intToStr[num-rem];
            res += intToStr[rem];
        }
        return res;
    }

    string numberToWords(int num) {
        std::vector<int>dv {1000000000, 1000000, 1000};
        if (num == 0) {
            return string("Zero");
        }
        
        string res;
        for (auto d:dv) {
            if (num >= d) {
                res += uptoThreeDigitStr(num/d);
                res += intToStr[d];
                num %= d;
            }
        }
        if (num) {
            res += uptoThreeDigitStr(num);
        }
        res.erase(res.end()-1);
        return res;
    }
};