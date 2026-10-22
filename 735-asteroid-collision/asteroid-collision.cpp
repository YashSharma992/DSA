class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<asteroids.size();i++){
            bool destoryed=false;
            if(asteroids[i]<0){
                while(!s.empty() && s.top()>0 && s.top()<-asteroids[i]){
                    s.pop();
                }
                if(!s.empty() && s.top()==-asteroids[i]){
                    s.pop();
                    destoryed=true;
                }
                else if (!s.empty() && s.top() > 0){
                    destoryed=true;
                }
            }
            if(!destoryed)
            s.push(asteroids[i]);
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};