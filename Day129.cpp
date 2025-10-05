#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int x, int y, vector<vector<int>>& maze, int n, string path,
               vector<string>& result, vector<vector<int>>& visited) {
        // If destination is reached
        if (x == n - 1 && y == n - 1) {
            result.push_back(path);
            return;
        }

        // Directions: D, L, R, U
        string dir = "DLRU";
        int dx[] = {1, 0, 0, -1};
        int dy[] = {0, -1, 1, 0};

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            // Check bounds and if it's valid to move
            if (newX >= 0 && newY >= 0 && newX < n && newY < n &&
                visited[newX][newY] == 0 && maze[newX][newY] == 1) {
                visited[x][y] = 1; // mark as visited
                solve(newX, newY, maze, n, path + dir[i], result, visited);
                visited[x][y] = 0; // backtrack
            }
        }
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        vector<string> result;
        vector<vector<int>> visited(n, vector<int>(n, 0));

        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
            return result; // no path if start or end blocked

        solve(0, 0, maze, n, "", result, visited);
        sort(result.begin(), result.end());
        return result;
    }
};
