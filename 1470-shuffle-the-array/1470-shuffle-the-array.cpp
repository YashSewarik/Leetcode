class Solution {
public:
    // void swap(int x,int y){
    //     int temp=x;
    //     x=y;
    //     y=temp;
    // }
    vector<int> shuffle(vector<int>& nums, int n) {
        int l,h;
        int t = 2*n;
        vector<int> res;
        l=0;
        h=n;
        for(int i=0;i<nums.size();i+=2){
            res.push_back(nums[l]);
            res.push_back(nums[h]);
            l++;
            h++;
        }
        return res;
    }
};