class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //sort(nums.begin(),nums.end());
        unordered_map<int,int> myMap;
        for(int num: nums)
        {
            myMap[num]++;
        }
        vector <pair<int, int>> arr;
        for(const auto&p : myMap)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

       vector<int> res;
       for(int i=0;i<k;i++)
       {
        res.push_back(arr[i].second);
       }
        return res;


        
    }
};
