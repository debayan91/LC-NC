class Solution {
   public:
    int trap(vector<int>& h) {
        int i = 0;
        int area = 0;
        while (i < size(h) && h[i] == 0) i++;
        while (i < size(h)) {
            int current = h[i];
            int st = i;
            i++;
            while (i < size(h) && h[i] < current) {
                i++;
            }
            if (i < size(h)) {
                while (st < i) {
                    area += current - h[st];
                    h[st] = current;
                    st++;
                }
            }
        }
        for(int i : h) cout << i << " ";
        cout << endl;
        reverse(begin(h), end(h));
        for(int i : h) cout << i << " ";
        i = 0;
        while (i < size(h) && h[i] == 0) i++;
        while (i < size(h)) {
            int current = h[i];
            int st = i;
            i++;
            while (i < size(h) && h[i] < current) {
                i++;
            }
            if (i < size(h)) {
                while (st < i) {
                    area += current - h[st++];
                }
            }
        }
        return area;
    }
};
