class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, -1)) ;
        int i = 0, j = 0, count = 1;
        while(count <= n * n){
            while(1 && j < n && res[i][j] == -1) res[i][j++] = count++;
            j--;
            i++;
            while(1 && i < n && res[i][j] == -1) res[i++][j] = count++;
            i--;
            j--;
            while(1 && j >= 0 && res[i][j] == -1) res[i][j--] = count++;
            j++;
            i--;
            while(1 && i >= 0 && res[i][j] == -1) res[i--][j] = count++;
            i++;
            j++;
        }
        return res;
    }
};