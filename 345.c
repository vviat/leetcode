int isVowel(int x) {
   x += (x <= 90 ? 32 : 0);
    switch(x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1;
        default :
            return 0;
    }
    return 0;
}


char* reverseVowels(char* s) {
    int i = 0, j = strlen(s) - 1;
    do{
        while(!isVowel(s[i])) ++i;
        while(!isVowel(s[j])) --j;
        if(i < j) {    
        if(i != j) {
                s[i] ^= s[j];
                s[j] ^= s[i];
                s[i] ^= s[j];
        }
            ++i, --j;
        }
    }  while(i < j);
    return s;
}
