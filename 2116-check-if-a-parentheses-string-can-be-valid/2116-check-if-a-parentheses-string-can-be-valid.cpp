class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = locked.size();
        if(n&1) return false;
        int a=0;
        for(int i=0;i<n;i++)
        {
            if(locked[i]=='0') a++;
            else
            {
                if(s[i]==')') a--;
                else
                    a++;
            }
            if(a<0) return false;
        }
        a=0;
        for(int i=n-1;i>=0;i--)
        {
            if(locked[i]=='0') a++;
            else
            {
                if(s[i]=='(') a--;
                else
                    a++;
            }
            if(a<0) return false;
        }
        return true;
    }
};