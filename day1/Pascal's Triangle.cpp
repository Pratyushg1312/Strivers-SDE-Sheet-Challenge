class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>>a;
      vector<int>t;
      t.push_back(1);
      for(int i=0;i<numRows;i++)
      {
          a.push_back(t);
          t.clear();
          t.push_back(1);
          int p=1;
          while(a[i].size()+1>=t.size())
          {
              int po=p-1;
              if(p+1 == a[i].size()+1)
              {
              t.push_back(1);
              break;
              }
              t.push_back(a[i][po]+a[i][p]);
                ++p;



          }
      }
      return a;
    }
};