char* reverseString(char* s) {
    // if(s == NULL) return NULL;
    // int n = strlen(s);
    // char *t = (char *) malloc(sizeof(char *) * n );
    // for(int i = n - 1 , j = 0; i > 0; i--, j++){
    //     t[j] = s[i];
    // }
    // return t;
    int i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		char c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
    return s;
}
