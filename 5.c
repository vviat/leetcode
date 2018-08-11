char* longestPalindrome(char* s) {
    int max_len = 1;
    char* st = s;
    char* start = s;
    while (*st) {

       int i = 0;
       int j = 0;
       int tmp_len = 0;

       while( *(st-i) == *(st+1+i) && *(st+1+i)!='\0' ) {
           i++;
       }

       while(*(st-j) == *(st+j) && *(st+j)!='\0' ) {
           j++;
       }

       tmp_len = i >= j ? 2*i : 2*j - 1;

       if ( max_len < tmp_len ) {
           max_len = tmp_len ;
           start = ( max_len & 1 ) ?  st - (j - 1) : st - (i-1) ;
       }

       st++;
    }

    *(start + max_len) = '\0';
    return start;
}
