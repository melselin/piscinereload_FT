#include <stdlib.h>
#include <stdio.h>
int  ft_strlen(char *str){
int i = 0;
while(*str !='\0'){
str++;
i++;
}
return i;
}

char *ft_strdup(char *src){
int len = ft_strlen(src);
char *dup;
dup=(char *)malloc(sizeof(char)*(len+1));
if(dup == NULL)return NULL;
int i = 0;
while(i<len){
dup[i] = src[i];
i++;
}
dup[i] = '\0';
return dup;
}

int main(void){
char * duplicated = ft_strdup("lol");
printf("%s",duplicated);
free(duplicated);
return(0);
}
