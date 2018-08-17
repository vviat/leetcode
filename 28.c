int strStr(char* haystack, char* needle) {
    int i,k,lenHaystack,lenNeedle,flag;
    lenHaystack=strlen(haystack);
    lenNeedle=strlen(needle);
    flag=1;
    if(lenNeedle==0)
        return 0;
 
    for(i=0;i<=lenHaystack-lenNeedle;i++)
    {
        flag=1;
        if(haystack[i]==needle[0])
        {
            for(k=0;k<lenNeedle;k++)
            {
                if(haystack[i+k]==needle[k])
                    ;
                else
                {
                    flag=0; break;
                }
                    
            }
            if(flag==1) return i;
        }
    }
    return -1;
}
