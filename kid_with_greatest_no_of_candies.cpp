class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = 0;
        vector<bool> res;
        for(int i=0;i<candies.size();i++)
        {
            m = max(candies[i],m);
            candies[i]=candies[i]+extraCandies;
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>=m)
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;
    }
};
