class Solution {
   public:
    vector<vector<int>> generateMatrix(int n) {
        int a = 1;
        vector<vector<int>> v(n, vector<int>(n, 0));
        int i = 0;
        int j = 0;
        bool flag = true;
        while (flag) {
            flag = false;
            while (i < n && i >= 0 && j >= 0 && j < n && v[i][j] == 0) {
                v[i][j++] = a++;
                cout << a << " ";
                flag = true;
            }
            i++;
            j--;
            while (i < n && i >= 0 && j >= 0 && j < n && v[i][j] == 0) {
                v[i++][j] = a++;
                flag = true;
                cout << a << " ";
            }
            j--;
            i--;
            while (i < n && i >= 0 && j >= 0 && j < n && v[i][j] == 0) {
                v[i][j--] = a++;
                flag = true;
                cout << a << " ";
            }
            j++;
            i--;
            while (i < n && i >= 0 && j >= 0 && j < n && v[i][j] == 0) {
                v[i--][j] = a++;
                flag = true;
                cout << a << " ";
            }
            i++;
            j++;
        }
        return v;
    }
};