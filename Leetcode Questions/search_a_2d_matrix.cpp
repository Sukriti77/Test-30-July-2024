bool search(vector<int> arr,int t){
    for(int i:arr){
        if(i==t){
            return true;
        }
    }
    return false;
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            if(target<=matrix[i][m-1] && target>=matrix[i][0]){
                bool ans=search(matrix[i],target);
                return ans;

            }
        }
        return false;
    }
};
