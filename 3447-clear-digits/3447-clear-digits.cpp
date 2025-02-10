class Solution {
public:
    string clearDigits(string s) {
        while (true) {
            bool foundDigit = false;
            for (size_t i = 0; i < s.size(); ++i) {
                if (isdigit(s[i])) {
                    // Find the closest non-digit character to the left
                    for (size_t j = i; j > 0; --j) {
                        if (!isdigit(s[j - 1])) {
                            s.erase(j - 1, 2); // Remove both the digit and the non-digit character
                            break;
                        }
                    }
                    foundDigit = true;
                    break;
                }
            }
            if (!foundDigit) {
                break; // Exit loop if no digits are found
            }
        }
        return s;
    }
};