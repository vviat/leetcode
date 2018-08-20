  int len1=strlen(ransomNote);
    int len2=strlen(magazine);
    int abc[26]={0};
    if (len1>len2){
        return false;
    }
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    while (i<len2){
        k=magazine[i]-'a';
        abc[k]++;
        i++;
    }
    while (j<len1){
        l=ransomNote[j]-'a';
        abc[l]--;
        if (abc[l]<0){
            return false;
        }
        j++;
    }
    return true;
}
