bool checkIfPangram(char* sentence) {
    int *f=calloc(26,sizeof(int));
    int n= strlen(sentence);
    for(int i=0;i<n;i++)
    {
        int val=sentence[i]-'a';
        f[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(f[i]==0) return false;
    }
    return true;
}