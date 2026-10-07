class Solution {
public:
    int calPoints(vector<string>& operations) {
        // int ans=0;
        // vector<int>v;
        // for(int i=0;i<operations.size();i++){
        //     if(operations[i]=="C"&&(!v.empty())){
        //         v.pop_back();
        //     }
        //     else if(operations[i]=="D"&&!v.empty()){
        //         v.push_back(v.back()*2);
        //     }
        //     else if(operations[i]=="+"&&!v.empty()){
        //         v.push_back(v[v.size()-1]+(v[v.size()-2]));
        //     }
        //     else{
        //         v.push_back(stoi(operations[i]));
        //     }
        // }
        // for(auto x:v){
        //     ans+=x;
        // }
        // return ans;


        int ans=0;
        stack<int>v;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                v.pop();
            }
            else if(operations[i]=="D"){
                v.push(v.top()*2);
            }
            else if(operations[i]=="+"){
                int x=v.top();
                v.pop();
                int y=v.top();
                v.push(x);
                v.push(x+y);
            }
            else{
                v.push(stoi(operations[i]));
            }
        }
        while(!v.empty()){
            ans+=v.top();
            v.pop();
        }
        return ans;
    }
};