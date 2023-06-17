class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> matrix2(n,vector<int>(n,0));
      
            int j=0;
        while(j<n)
        {

        for(int i =n-1;i>=0;i--)
        {
            matrix2[j][n-i-1]=matrix[i][j];  
            
        }
        
      
        j++;
        }
        matrix.clear();
        matrix=matrix2;
    }
};