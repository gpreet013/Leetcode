
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j= 0;
        int i=0;
        while(i<n){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
             
            }
            i++;
        }
        while(j<n){
            nums[j]=0;
            j++;
        }

    }
};