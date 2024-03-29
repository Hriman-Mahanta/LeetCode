class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s[0] == ')' || s[0] == '}' || s[0] == ']')
                return false;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else if(!stack.empty())
            {
                if(s[i] == ')' && stack.top() == '(')
                    stack.pop();
                else if(s[i] == '}' && stack.top() == '{')
                    stack.pop();
                else if(s[i] == ']' && stack.top() == '[')
                    stack.pop();
                else
                    return false;
            }
            else
                return false;
        }
        if(stack.empty())
            return true;
        else
            return false;
    
    }
        
};