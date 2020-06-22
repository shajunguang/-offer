//给定数组，找出最小的K个数  
//思路一，前k个数中的最大值，和后面的数比较，不停将小的换进来，最后就是最小的k个数 O(nk)
```c
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        if(k>(int)input.size() || input.empty()) return {};
        for(int j=k;j<(int)input.size();j++){
            int max=INT_MIN;
            int pos;
            for(int i=0;i<k;i++)if(input[i]>max) max=input[i],pos=i;
            if(input[j]<max) swap(input[j],input[pos]);
        }
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(input[i]);
        return ans;
    }
};
```
//优先队列思想,内部实现是堆
```c
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        if(k>(int)input.size() || input.empty()) return {};
        priority_queue<int,vector<int>,greater<int>> pq; //小根堆，默认是大根堆
        for(auto n:input) pq.push(n);
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top());pq.pop();
        }
        return ans;
    }
};
```
