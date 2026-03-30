bool areOccurrencesEqual(char* s) {
    int *f=calloc(26,sizeof(int));
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        int val=s[i]-'a';
        f[val]++;
    }
    int com=f[s[0]-'a'];
    for(int i=0;i<26;i++)
    {
        if(f[i]==0) continue;
        if(f[i]!=com) return false;
    }
    return true;
}