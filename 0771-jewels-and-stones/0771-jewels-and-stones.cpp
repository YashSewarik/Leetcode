class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> u;
        for(int i =0;i<stones.size();i++){
            u[stones[i]]++;
        }
        int ctr=0;
        for(auto& c:jewels){
            ctr+=u[c];
        }
        return ctr;
    }
};