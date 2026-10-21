class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
           bool destroyed = false;

            while(!st.empty() && st.top() > 0 && asteroids[i] < 0) {

                if(st.top() < -asteroids[i]) {
                    st.pop();
                }
                else if(st.top() == -asteroids[i]) {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }

            if(!destroyed)
                st.push(asteroids[i]);
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};