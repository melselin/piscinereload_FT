#include <unistd.h>

void ft_putchar(char c){
write(1,&c,1);
}

int main(int argc,char **argv){
int a = 1;
while(a<argc){
int i = 0;
while(argv[a][i]){
ft_putchar(argv[a][i]);
i++;
}
ft_putchar('\n');
a++;
}
return (0);
}

//compile with gcc -o name ftname.c
//run with ./name arg1 arg2 argwhatever 
