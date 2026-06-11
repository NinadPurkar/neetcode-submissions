class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {

     for(int i=0;i<nums.size();i++)
     {
        int temp = target-nums[i];
        for(int j=0;j<nums.size();j++)
        {
            if (temp == nums[j] && i!=j)
            {
                vector<int> vec;
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
     }   
    }
};
