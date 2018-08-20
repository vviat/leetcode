int lengthOfLastWord(char* s) {
    int len = strlen(s),ind;
    while(len > 0&& s[len - 1] == ' ') --len;
    ind = len -1;
    while(ind >= 0 && s[ind] != ' ') --ind;
    return len - ind -1;
}
