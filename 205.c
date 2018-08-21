bool isIsomorphic(char* s, char* t) {
   	int letter1[256] = { 0 };
	for (int i = 0; s[i] != '\0'; i++) {
		if (!letter1[s[i]]) letter1[s[i]] = t[i];
		else if (letter1[s[i]] != t[i]) return false;
	}
	int letter2[256] = { 0 };
	for (int i = 0; t[i] != '\0'; i++) {
		if (!letter2[t[i]]) letter2[t[i]] = s[i];
		else if (letter2[t[i]] != s[i]) return false;
	}
	return true;
}
