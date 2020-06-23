//利用等差数列求和，可得到n*(2*a0+n-1)=2*sum -> 2*sum/n>=n-> n<=sqrt(2*sum)  
//因此穷举时，只需要缩减sqrt（2*sum） 另外还可以根据奇偶排除一些选项
```c
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        sum=2*sum;
        int m=sqrt(sum)+0.5;
        vector<vector<int>>ans;
        for(int i=m;i>=2;i--){ //从大到小找，保证长的在前
            int a0;vector<int> tmp;
            if(i%2==0){
                if(sum%i==0 && sum/i%2==1){
                    a0=sum/i-i+1;
                    a0/=2;
                    for(int j=0;j<i;j++) tmp.push_back(a0+j);
                    ans.push_back(tmp);
                }
            }else{
                if(sum%i==0 && sum/i%2==0){
                    a0=sum/i-i+1;
                    a0/=2;
                    for(int j=0;j<i;j++) tmp.push_back(a0+j);
                    ans.push_back(tmp);
                }
            }
        }
        return ans;
    }
};
```
//滑窗方法
```c
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        //滑动窗口
        int l=1,r=2;
        vector<vector<int>>ans;
        while(l<r){
            int cur=(l+r)*(r-l+1)/2;
            if(cur==sum){
                vector<int>tmp;
                for(int i=l;i<=r;i++)tmp.push_back(i);
                ans.push_back(tmp);
                l++;
            }else if(cur<sum) r++;
            else l++;
        }
        return ans;
    }
};
```
