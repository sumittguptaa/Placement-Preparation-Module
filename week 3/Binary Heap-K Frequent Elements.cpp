class Solution {
private:
    static int compare(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> count;
        for(int i = 0; i < nums.size(); i++)
            count[nums[i]]++;
        vector<pair<int,int>> temp(count.begin(),count.end());
        sort(temp.begin(), temp.end(), compare);
        for(int i = 0; i < k; i++)
            res.push_back(temp[i].first);
        return res;
    }
};
