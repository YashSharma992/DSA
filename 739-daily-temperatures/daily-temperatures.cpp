class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> v(n, 0);
        stack<int> s;
        
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && temperatures[s.top()] <= temperatures[i]) {
                s.pop();
            }
            if (!s.empty()) {
                v[i] = s.top() - i;
            }
            s.push(i);
        }
        return v;
    }
};