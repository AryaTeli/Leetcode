// O(n^2)
// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0;
//         for(int i=0;i<jewels.length();i++)
//         {
//             for(int j=0;j<stones.length();j++)
//             {
//                 if(jewels[i]==stones[j])
//                 {
//                     count+=1;
//                 }
//                 else
//                 {
//                     count+=0;
//                 }
//             }
//         }
//         return count;
//     }
// };

// O(m+n)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;
        for (int i = 0; i < stones.length(); ++i) {
            if (jewelSet.contains(stones[i])) {
                count++;
            }
        }
        return count;
    }
};

