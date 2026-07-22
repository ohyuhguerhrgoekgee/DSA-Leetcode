class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int row=0;row<numRows;row++){

            vector<int> curr;
            long long val=1;
            curr.push_back(1);
            for(int col=1;col<=row;col++){
                val = val*(row-col+1);
                val = val/col;
                curr.push_back(val);
            }
            ans.push_back(curr);
        }
        return ans;

        
    }
};