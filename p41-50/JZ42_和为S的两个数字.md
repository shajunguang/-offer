//双指针,值得注意的是，x+y=c+d,y-x>d-c->x*y<c*d ,根据2xy<=x^2+y^2可以知道x==y，积最大
```c
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int i=0,j=array.size()-1,a0,a1,flag=0;
        //long long time=1e17;
        while(i<j){
            int tmp=array[i]+array[i];
            //long long tmp1=array[i]*array[j];
            if(tmp==sum){
               //if(tmp1<time) time=tmp1,a0=array[i],a1=array[j];
               // flag=1;i++,j--;
               return{array[i],array[j]}
            }else if(tmp<sum) i++;
             else j--;
        }
       // if(flag) return{a0,a1};
        return {};
    }
};
```
