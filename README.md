//sorting binary search in sorted array
// column are arranged in ascending order left to right
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowIndex=0;
        int colIndex=col-1;

        while(rowIndex < row && colIndex>=0){
            int element=matrix[rowIndex][colIndex];

            if(element==target){
                return 1;
            }
            if(element<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }
};
