
int lengthOfLongestSubstring(char* s) {
     char *t=s;                           //子串
    int max=0,i=0,j;                     //i和j分别记录当前子串的开始下标和结束下标
    while(*(s+i)!='\0')
    {  
        int a[128]={0};                  //记录当前的字母或符号是否在当前的最长子串中出现过。
        j=i+1;
        while(*(t+j)!='\0')
       {
           if(a[*(t+j)]==0&&*(s+i)!=*(t+j))
           {
                a[*(t+j)]=1;
                j++;
                max=j-i>max?j-i:max;

           }
           else
           {
               max=j-i>max?j-i:max;
               i++;
               break;
           }
       }
       max=j-i>max?j-i:max;
       if(*(t+j)=='\0')                //子串达到最大长度
           return max;
    }
    return max;
}

