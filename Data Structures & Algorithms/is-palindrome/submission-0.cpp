class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for( char c : s )
        {
            if(isalnum(c))
            filtered += tolower(c);
        }
        int si = 0, ei = filtered.size() - 1;
        while(si <= ei)
        {
            if(filtered[si] != filtered[ei])
            return false;
            si++;
            ei--;
        }
        return true;
    }
};
