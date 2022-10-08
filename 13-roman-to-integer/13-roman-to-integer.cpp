class Solution {
public:
    int romanToInt(string s) {
        int arr[s.length()];
        for(int i=0; i<s.length(); i++)
        {
            switch(s[i])
            {
                case 'I':
                    arr[i] = 1;
                    break;
                case 'V':
                    arr[i] = 5;
                    break;
                case 'X':
                    arr[i] = 10;
                    break;
                case 'L':
                    arr[i] = 50;
                    break;
                case 'C':
                    arr[i] = 100;
                    break;
                case 'D':
                    arr[i] = 500;
                    break;
                case'M':
                    arr[i] = 1000;
                    break;                    
            }
        }
        
        int sum =0;
        
        for(int i=0; i<s.length()-1; i++)
        {
            if(arr[i] < arr[i+1])
            {
                sum -= arr[i];
            }
            else
                sum += arr[i];
        }
        sum += arr[s.length()-1];
        return sum;
    }
};