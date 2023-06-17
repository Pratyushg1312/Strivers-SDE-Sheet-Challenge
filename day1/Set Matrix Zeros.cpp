class Solution 
{
    public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>coor;
            
                for(int i=0;i<m;i++ )
                {
                    for(int j=0;j<=n/2;j++)
                    {
                        if(matrix[i][j] == 0)
                        {

                        coor.push_back({i,j});
                        }
                        if(matrix[i][n-j-1]==0)
                        {
                            if(j!=n-j-1)
                            coor.push_back({i,n-j-1});
                        }
                    }
                }

                for(auto& it:coor)
                {
                    
                    
                    matrix[it.first]=vector<int>(n,0);
                    for(int i=0;i<= m/2;i++)
                    {
                        matrix[i][it.second]=0;
                        matrix[m-i-1][it.second]=0;
                    }
                }
                }
    };
