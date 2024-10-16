#include <unistd.h>
#include <stdio.h>
/*
void ft_putstr(char *str){
int i = 0;
while(str[i]){
printf("%c", str[i]);
i++;
}
}
*/

void ft_putchar(char c){
write(1, &c, 1);
}

void ft_putstr(char *str){
int i = 0;
while(str[i]){
ft_putchar(str[i]);
i++;
}
}


int main(void){
ft_putstr("merhaba");
return (0);
}
