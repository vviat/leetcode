int firstUniqChar(char* s) {
    int len = strlen(s);
    int a[26] = {0};
    int i = 0;
    while (i < len){
        a[s[i] - 'a']++;
        i++;
    }
    i = 0;
    while (i < len){
        if (a[s[i]-'a'] == 1){
            return i;
        }
        i++;
    }
    return -1;
}
