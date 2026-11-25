class Solution {
public:
    bool checkString(string s) {
        char lastChar = 'a';
        bool charChange = false;
        bool noCharA = false;
        if(s[0] == 'b') noCharA = true;
        for(int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if(c == 'a' && noCharA) return false;
            if(i == 0)
            {
                lastChar = c;
            }
            else
            {
                if(c != lastChar && charChange == false)
                {
                    charChange = true;
                }
                else if(c != lastChar && charChange)
                {
                    return false;
                }
            }
            lastChar = c;
        }
        return true;
    }
};