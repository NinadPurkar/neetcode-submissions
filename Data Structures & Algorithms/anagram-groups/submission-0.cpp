class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {

    map<string, vector<string>> myMap;
     for(int i=0;i<strs.size();i++)
     {
        string s = strs[i];
        sort(s.begin(),s.end());
        
        if (myMap.find(s) != myMap.end())
        {
            vector<string> temp = myMap.at(s);
            temp.push_back(strs[i]);
            myMap[s] = temp;

        }
        else
        {
            vector<string> temp;
            temp.push_back(strs[i]);
            myMap.insert({s,temp});
        }
        // check if we have s as key in hashmap?
        // if present we will increase the counter.or we can directly put list of values.

     }
    
    vector<vector<string>> ansvec;
    //for(int i =0;i<strs.size();i++)
    //{
    //    string s = strs[i];
    //   sort(s.begin(),s.end());
    //    ansvec.push_back(myMap[s]);
    //}
    for(map<string,vector<string>>:: iterator it = myMap.begin(); it!=myMap.end();it++)
    {
        ansvec.push_back(it->second);
    }
        return ansvec;
    }
};
