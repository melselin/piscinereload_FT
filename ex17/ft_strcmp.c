#include <stdio.h>
int ft_strcmp(char *s1, char *s2){
int i= 0;
int j = 0;
while(s1[i]){
i++;
}
while(s2[j]){
j++;
}
if(i>j) return 1;
if(i<j) return -1;
if(i==j) return 0;
}

int main(void){
printf("%i",ft_strcmp("selm", "selam")); 
return(0);
}
