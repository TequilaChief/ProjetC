char* lastSyllable(char str[],int i){
    char *pch;
    char *last_syllable;
    pch = strtok (str,"-");
    last_syllable=pch;
    for(int e=0;e<i;e++){
        last_syllable=pch;
        pch = strtok (NULL, "-");
    }
    return last_syllable;
}
