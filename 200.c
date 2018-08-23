    int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
     
    void dfs(char** grid, int gridRowSize, int gridColSize, int x, int y)
    {
        grid[x][y] = '0';
        for(int i = 0;i < 4;i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(nx < 0 || nx >= gridRowSize || ny < 0 || ny >= gridColSize || grid[nx][ny] == '0')
                continue;
            dfs(grid, gridRowSize, gridColSize, nx, ny);
        }
        return ;
    }
     
    int numIslands(char** grid, int gridRowSize, int gridColSize) {
        int ans = 0;
        for(int i = 0;i < gridRowSize;i++){
            for(int j = 0;j < gridColSize;j++){
                if(grid[i][j] == '1')
                    dfs(grid, gridRowSize, gridColSize, i, j),ans++;
            }
        }
        return ans;
    }
