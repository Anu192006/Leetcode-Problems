bool detectCapitalUse(char* word) {
    int upperCount=0;
    int len=0;
    for(int i=0;word[i]!='\0';i++){
        if(word[i]>='A'&&word[i]<='Z'){
            upperCount++;
        }
        len++;
    }
    if(upperCount==len) return true;
    if(upperCount==0) return true;
    if(upperCount==1 && word[0]>='A'&& word[0]<='Z') 
       return true;
    return false;
}