class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        vector<int>v;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"&&(!v.empty())){
                v.pop_back();
            }
            else if(operations[i]=="D"&&!v.empty()){
                v.push_back(v.back()*2);
            }
            else if(operations[i]=="+"&&!v.empty()){
                v.push_back(v[v.size()-1]+(v[v.size()-2]));
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        for(auto x:v){
            ans+=x;
        }
        return ans;
    }
};