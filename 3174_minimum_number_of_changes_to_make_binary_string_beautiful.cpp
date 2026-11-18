class Solution {
public:
    int minChanges(string s) {
        stack<char> st;
        int result = 0;
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(c == st.top())
            {
                st.pop();
            }
            else if( c!= st.top())
            {
                st.pop();
                result+=1;
            }
        }    
        return result;
    }
};