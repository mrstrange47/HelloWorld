#include<bits/stdc++.h>
using namespace std;

    bool bfs(vector<vector<int>>& graph, queue<int>&q, vector<int>&color){
         while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int edge: graph[curr]){
                if(color[edge] == -1){
                    color[edge] = 1-color[curr];
                    q.push(edge);
                }
                else{
                    if(color[edge] == color[curr])return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0; i<n; i++){
            if(color[i] == -1){
                queue<int>q;
                q.push(i);
                if(!bfs(graph,q,color)){
                    return false;
                }
            }
        }
        
       
        return true;
    }
    int main(){
        return 0;
    }
