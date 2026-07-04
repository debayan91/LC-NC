class Solution {
   public:
    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            res += "#" + to_string(size(s)) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < size(s)) {
            string sz = "";
            i++;
            while (s[i] != '#') sz += s[i++];
            i++;
            int size = stoi(sz);
            res.push_back(s.substr(i, size));
            i += size;
        }
        return res;
    }
};
