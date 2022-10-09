class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.length()-1;
        int count = 0;
        while(s[j] == ' ')
            j--;
        for(; j!=-1; j--)
        {
            if(s[j]==' ')
                break;
            count ++;
        }
        return count;
    }
};