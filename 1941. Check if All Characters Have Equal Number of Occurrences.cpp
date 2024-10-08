class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> mp ; 
        for (int i = 0 ; i < s.length() ; i++)
        {
            mp[s[i]]++;
        }
        int temp = mp[s[0]];

        for (auto i : mp)
        {
            if (i.second != temp)
            {
                return false ;
            }
        }
        return true ; 
    }
};
