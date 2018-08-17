char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0)return "";
    char *ret = (char *)malloc(strlen(strs[0]) + 1);
    strcpy(ret , strs[0]);
    int j = 0;
    for(int i = 1; i < strsSize; i++){
        for(; strs[i][j] && ret[j]; j++) {
            if(strs[i][j] == ret[j]) continue;
            ret[j] = 0;
            break;
        }
        ret[j] = 0;
    }
    return ret;
}
