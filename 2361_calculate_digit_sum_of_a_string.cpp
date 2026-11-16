class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();
        if(n <= k) return s;
        else
        {
            string newS = "";
            int sum = 0;
            for(int i = 0; i < n; i++)
            {
                sum += (s[i] - '0');
                if((i + 1) % k == 0)
                {
                    newS += to_string(sum);
                    sum = 0;
                }
                else if(i + 1 == n)
                {
                    newS += to_string(sum);
                }               
            }
            return digitSum(newS,k);
        }
        
    }
};