class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
      vector<int> ans;

      int last_index = num.size()-1;
      int carry = 0;

      while(k>0)
        {
          int first_digit = k%10;
          if (last_index>=0)
          {
            int sum = num[last_index] + first_digit + carry;

            ans.push_back(sum%10);
            carry = sum/10;
            last_index --;
          }
          else
          {
            int sum = first_digit + carry;
            ans.push_back(sum%10);
            carry = sum/10;

          }

          k = k/10;
        }

      while(last_index>=0)
        {
          int sum = num[last_index] + carry;
          ans.push_back(sum%10);
          carry = sum/10;      
          last_index--;
        }

      if (carry)
      {
        ans.push_back(carry);
      }


      reverse(ans.begin(),ans.end());
      return ans;
        
    }
};