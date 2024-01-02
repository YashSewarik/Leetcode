class Solution {
public:
    
    int su(int n){
        int s = 0;
        s = (n)*(n-1);
        s = s/2;
        return s;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int> u;
        for (int i = 0; i < nums.size(); i++)
            u[nums[i]]++;
        for(auto& x :u){
            sum+= su(x.second);
        }
        
        return sum;
    }
};