class Solution {
public:
    string largestOddNumber(string num) {
        int res = -1;
        for(int i = 0;i<num.size();i++){
            if(stoi(string(1, num[i]))%2!=0){
                res = i;
            }
        }
        // return to_string(res);
        string s="";
        if(res<0)
            return "";
        for(int j=0;j<=res;j++){
            s+=num[j];
        }
        return s;
    }
};