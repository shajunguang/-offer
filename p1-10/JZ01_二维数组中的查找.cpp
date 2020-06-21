//充分利用，二维数组按行递增，同时按列递增特性，从左下角搜索，时间复杂度O(logM*N) (二分搜索）空间O(1)
```  

#include<bits/stdc++.h> //万能头文件，牛客支持，后面不解释！
using namespace std;

class Solution {
public:
    bool Find(int t, vector<vector<int> > array) {
        /*
        for(int i=0;i<array.size();i++)
            for(int j=0;j<array[0].size();j++)
                if(array[i][j]==t)return true;
        return false;
        */
        int i,j,m=array.size(),n=array[0].size();
        for(int i=m-1,j=0;i>=0 && j<n;){
            if(array[i][j]==t)return true;
            if(array[i][j]>t) i--;
            else j++;
        }
        return false;
    }
};
int main()
{
  Solution res;
  vector<vector<int>> array={{1,2,3},{2,3,4},{3,4,5}};
  res.Find(5,array);
  return 0;
}

```  
