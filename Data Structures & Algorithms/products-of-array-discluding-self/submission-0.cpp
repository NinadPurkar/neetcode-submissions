class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product =0;
        vector<int> product_vector;

        for(int i=0;i<nums.size();i++)
        {
            int product_of_other_num = 1;
            for(int j =0;j<nums.size();j++)
            {
                if (i != j)
                {
                    product_of_other_num = product_of_other_num * nums[j];
                }
                
            }
            product_vector.push_back(product_of_other_num);
        }
        return product_vector;

    }
};
