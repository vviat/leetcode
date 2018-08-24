bool isPalindrome(char* s) {
    if(s == NULL) return true;
    int j = strlen(s) -1;
    int i = 0;
    while(i < j)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
        if(s[j] >= 'A' && s[j] <= 'Z') s[j]+=32;
        if(s[i] < 48 || s[i]>122 || (s[i] > 57 && s[i] < 97)) {i++; continue;}
        if(s[j] < 48 || s[j]>122 || (s[j] > 57 && s[j] < 97)) {j--; continue;}
        if(s[i] != s[j]) break;
        i++, j--;
    } 
    if(i < j) return false;
    return true;
}
