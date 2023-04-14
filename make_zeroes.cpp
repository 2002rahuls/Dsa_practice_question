class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
      int  n=matrix.size();
        int m=matrix[0].size();
        int row,col;
        for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
          if (matrix[i][j] == 0)
            {
                row = i;
                col = j;
                int sum = 0;
                if (i - 1 >= 0)
                {
                    sum = sum + matrix[i - 1][j];
                    matrix[i - 1][j] = 0;
                }
                if (j - 1 >= 0)
                {
                    sum = sum + matrix[i][j - 1];
                    matrix[i][j - 1] = 0;
                }
                if (i + 1 >= 0)
                {
                    sum = sum + matrix[i + 1][j];
                    matrix[i + 1][j] = 0;
                }
                if (j + 1 >= 0)
                {
                    sum = sum + matrix[i][j + 1];
                    matrix[i][j + 1] = 0;
                }
                matrix[i][j] = sum;
            }
        }
       
        }
    }
};