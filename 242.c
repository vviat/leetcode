bool isAnagram(char* s, char* t) {
    int num_s[128] = {0};
    int num_t[128] = {0};
    while(s[0]) num_s[s[0]]++, s++;
    while(t[0]) num_t[t[0]]++, t++;
    return memcmp(num_s, num_t,sizeof(int) * 128) == 0;
}
