bool isValid(char* s) {
    int len = strlen(s);
    int i;
    int pos = 0;
    
    char *pArr = (char*)malloc(len * sizeof(char));
    
    for ( i = 0; i < len; i ++ ) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            pArr[pos ++] = s[i];
        }
        if (s[i] == ')') {
            if ( pArr[pos - 1] != '(' ) {
                return 0;
            } else {
                pos--;
            }
        } else if (s[i] == '}') {
            if ( pArr[pos - 1] != '{' ) {
                return 0;
            } else {
                pos--;
            }
        } else if (s[i] == ']') {
            if ( pArr[pos - 1] != '[' ) {
                return 0;
            } else {
                pos--;
            }
        }
    }
    
    if ( pos != 0 ) {
        return 0;
    }
    
    return 1;
}
