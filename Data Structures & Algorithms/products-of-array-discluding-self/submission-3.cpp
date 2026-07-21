class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        vector<int> product_vector;

        vector<int> prefix_product;
        vector<int> postfix_product;

        int product = 1;
        for(int i=0;i<nums.size();i++)
        {
            prefix_product.push_back(product);
            product = product*nums[i];
        }
        product = 1;
         postfix_product.resize(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            postfix_product[i] = product;
            product = product*nums[i];
        }

        // for(int i=0;i<prefix_product.size();i++)
        // {
        //     cout<<prefix_product[i]<<endl;
        // }
        // for(int i=0;i<postfix_product.size();i++)
        // {
        //     cout<<postfix_product[i]<<endl;
        // }

        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                product_vector.push_back(postfix_product[i]);
            }
            else if(i == nums.size()-1)
            {
                product_vector.push_back(prefix_product[i]);
            }
            else
            {
                product_vector.push_back(prefix_product[i] * postfix_product[i]);
            }

        }

        // for(int i=0;i<nums.size();i++)
        // {
        //     int product_of_other_num = 1;
            
        //     for(int j =0;j<nums.size();j++)
        //     {
        //         if (i != j)
        //         {
        //             product_of_other_num = product_of_other_num * nums[j];
        //         }
                
        //     }
        //     product_vector.push_back(product_of_other_num);
        // }
        return product_vector;

    }
};
