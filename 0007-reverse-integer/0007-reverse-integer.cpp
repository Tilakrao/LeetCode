class Solution {
public:
    int reverse(int x) {

        if (x <= INT_MIN)
        {
            return 0;
        }
        int rev =0;
        bool si = false;
        if (x < 0)
        {
            si = true;
            x = -x;
        }

        while (x != 0)
        {
            if (rev > INT_MAX / 10)
            {
                return 0;
            }
            rev = (x%10) + (rev*10);
            x/=10;
        }

        if (si == true){
            rev = -rev ;
        }
        
        return rev;
        
    }
};