#include <stdio.h>
int ft_strlen(char *str){
int i = 0;
while(str[i]){
i++;
}
return i;
}

int main(void){
int i = ft_strlen("anan");
printf("%i",i);
return (0);
}
