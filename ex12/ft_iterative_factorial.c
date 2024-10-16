#include <stdio.h>
int ft_iterative_factorial(int nb){
int factorial=1;
if(nb < 0) return 0;
if(nb == 1 || nb == 0) return 1;
while(nb > 0){
factorial *= nb;
nb--;

}

return factorial;

}

int main(void){
printf("%d\n",ft_iterative_factorial(5));
return(0);
}
