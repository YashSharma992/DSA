class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        int cnt=0;
        if(sum<=9){
            ans += to_string(sum);
            ans.append(num - 1, '0');
            return ans;
        }
        else if(sum/9>=num && sum%9!=0){
            return ans;
        }
        else{
            while(sum>9){
            ans+=to_string(9);
            cnt++;
            sum-=9;
            }
            ans+=to_string(sum);
            cnt++;
            while(num-cnt>0){
            ans+='0';
            cnt++;
            }
        }
        return ans;
    }
};