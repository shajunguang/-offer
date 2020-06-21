//简单题，字符串操作，原址操作，空格替换为%20，每个空格，造成后面的字符后移2×count
```c++

//从后插入机智啊
class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count=0;
        for(int i=0;i<length;i++)if(str[i]==' ')count++;
        for(int i=length-1;count!=0;i--){
            if(str[i]!=' ') str[i+2*count]=str[i];
            else{
                count--;
                str[i+2*count]='%';
                str[i+2*count+1]='2';
                str[i+2*count+2]='0';
            }
        }
	}
};

```
