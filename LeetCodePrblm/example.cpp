class Solution {
    public long minCost(int m, int n, int[][] waitCost) {
        long[][] grid = new long[m][n];
        grid[0][0] = 1;
        for(int i=1; i<n; i++){
            grid[0][i] = (i+1);
            if(!(m-1 == 0 && i+1 == n)){
                grid[0][i]+=waitCost[0][i];
            }

            grid[0][i] += grid[0][i-1];
        }

        for(int i=1; i<m; i++){
            grid[i][0] = i+1;
            if(!(i+1 == m && n-1 == 0)){
                grid[i][0]+=waitCost[i][0];
            }

            grid[i][0]+=grid[i-1][0];
        }

        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                long entry = (i+1)*(j+1);
                
                grid[i][j] = entry;
                if(!(i+1 == m && j+1 == n)){
                    grid[i][j] += waitCost[i][j];
                }

                grid[i][j]+=Math.min(grid[i-1][j], grid[i][j-1]);
            }
        }

        return grid[m-1][n-1];
    }
}