class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--)
        {
            if(digits[i] < 9)
            {
                digits[i] ++;
                return digits;
            }
            digits[i] = 0;
        }
        vector<int> new_digits(digits.size()+1);
        new_digits[0] = 1;
        return new_digits;
    }
};