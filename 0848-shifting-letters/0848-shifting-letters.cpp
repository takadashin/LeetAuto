class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int temp = 0;
        int n = s.size();
        for(int i = n-1;i >= 0;i--)
        {
            shifts[i] = (shifts[i] +temp) % 26;
            temp = shifts[i];

        }
        string res = "";
        for(int i = 0; i < shifts.size();i++)
        {
            res.push_back(((s[i] - 'a' + shifts[i]) % 26 + 'a' ));
        }

        return res;
    }
};