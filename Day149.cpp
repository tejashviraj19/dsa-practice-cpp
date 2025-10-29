class Solution {
  public:
  
  vector<int>dx{0,0,1,-1};
  vector<int>dy{1,-1,0,0};
  
    bool isSafe(int i, int j, int n,int m, vector<vector<bool>>& visited) {
        if(i>=0 && i<n && j>=0 && j<m && !visited[i][j]) {
            return true;
        }
        return false;
    }
    void performBfs(vector<vector<char>>& mat,vector<vector<bool>>&visited,int i, int j) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
         visited[i][j]=true;
            mat[i][j]='X';
        q.push({i,j});
        vector<pair<int,int>>recur;
        bool change=false;
        while(!q.empty()) {
            pair<int,int>vertex=q.front();
            q.pop();
            recur.push_back(vertex);
            int x=vertex.first;
            int y=vertex.second;
             for(int k=0;k<dx.size();k++) {
            if(isSafe(x+dx[k],y+dy[k],n,m,visited)) {
                if(x+dx[k]==0||y+dy[k]==0||x+dx[k]==n-1||y+dy[k]==m-1) {
                    change=true;
                }
                q.push({x+dx[k],y+dy[k]});
                visited[x+dx[k]][y+dy[k]]=true;
                mat[x+dx[k]][y+dy[k]]='X';
            }
        }
        }
        
        if(change) {
            for(int x=0;x<recur.size();x++) {
                pair<int,int>vertex=recur[x];
                int a=vertex.first;
                int b=vertex.second;
                mat[a][b]='O';
                if(a==0||b==0||a==n-1||b==m-1) {
                  visited[a][b]=false;
                }
            }
        }
        
    }
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        // code here
        vector<vector<bool>>visited=vector<vector<bool>>
        (mat.size(),vector<bool>(mat[0].size(),false));
        
        for(int i=0;i<mat.size();i++) {
            for(int j=0;j<mat[0].size();j++) {
                if(mat[i][j]=='X') {
                    visited[i][j]=true;
                }
            }
        }
        
        for(int i=1;i<mat.size()-1;i++) {
            for(int j=1;j<mat[0].size()-1;j++) {
                if(mat[i][j]=='O'&&!visited[i][j]) {
                    performBfs(mat,visited,i,j);
                }
            }
        }
        return mat;
    }
};
