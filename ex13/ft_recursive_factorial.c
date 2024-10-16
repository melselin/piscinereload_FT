#include <stdio.h>
int ft_recursive_factorial(int nb){
if(nb <0) return 0;
if(nb ==1 || nb ==0) return 1;
return nb * ft_recursive_factorial(nb-1);
}

int main(void){
printf("5! = %d\n", ft_recursive_factorial(5)); // Expected output: 120int resul
printf("0! = %d\n", ft_recursive_factorial(0)); // Expected output: 1
printf("-3! = %d\n", ft_recursive_factorial(-3)); // Expected output: 0
printf("10! = %d\n", ft_recursive_factorial(10)); // Expected output: 3628800
return (0);
}

