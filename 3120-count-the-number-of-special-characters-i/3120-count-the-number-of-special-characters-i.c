int numberOfSpecialChars(char* word) {
    int *fl=calloc(26,sizeof(int));
    int *ul=calloc(26,sizeof(int));
    int n=strlen(word);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            int val=word[i]-'a';
            fl[val]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(word[i]>='A'&& word[i]<='Z')
        {
            int val1=word[i]-'A';
            ul[val1]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(fl[i]>0 && ul[i]>0)
        {
            count++;
        }
    }
    return count;
}