class Solution {
public:
    void dfs(int n,vector<int>&vis,vector<vector<int>>&adj){
        vis[n]=1;
        for (auto it : adj[n]) {
            if (!vis[it]) {
                dfs(it, vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>>adj(isConnected.size()+1);
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(isConnected.size(),0);
        int cnt=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adj);
            }
        }
        return cnt;
    }
};