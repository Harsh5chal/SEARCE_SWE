//1672 Leetcode
//CPP
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = -1;
        for(int i = 0;i< accounts.size();i++){
            int count = 0;
            for(int j = 0;j< accounts[i].size();j++){
                    count += accounts[i][j];
            }
            maxi = max(maxi,count); 
        }
        return maxi;
    }
};

//Java
class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxi = 0;
        for(int i = 0;i< accounts.length;i++){
            int count = 0;
            for(int j = 0;j< accounts[i].length;j++){
                    count += accounts[i][j];
            }
            maxi = Math.max(maxi,count); 
        }
        return maxi;
    }
}

