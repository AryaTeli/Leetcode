// O(n^2)
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=1;j<n;j++)
//             {
//                 if(nums[i]>nums[j])
//                 {
//                     int temp = nums[i];
//                     nums[i]=nums[j];
//                     nums[j]=temp;
//                     cout<<nums;
//                 }
//             }
//         }
//     }
// };

O(n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0, mid=0, high = n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }

    }
};
