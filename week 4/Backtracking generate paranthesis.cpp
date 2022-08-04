class Solution {
private:
    struct track {
        string par = "";
        int l = 0, r = 0;
        track() {}
        track(string par, int l, int r) : par(par), l(l), r(r) {}
    };
public:
    vector<string> generateParenthesis(int n) {
        vector<track> t = {track()};
        for (int i = 0; i < 2*n - 1; i++) {
            int size = t.size();
            for (int j = 0; j < size; j++) {
                if (t[j].r == t[j].l) {
                    t[j].par += '('; t[j].l += 1;
                }
                else if (t[j].l == n) {
                    t[j].par += ')'; t[j].r += 1;
                }
                else {
                    t.push_back(track(t[j].par + '(', t[j].l + 1, t[j].r));
                    t[j].par += ')'; t[j].r += 1;
                }
            }
        }
        vector<string> ans(t.size());
        for (int i = 0; i < t.size(); i++) ans[i] = t[i].par + ')';
        return ans;
    }
};
