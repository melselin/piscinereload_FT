#include <stdio.h>

int ft_sqrt(int nb){
int sqr=0;
while(sqr * sqr < nb){
sqr++;
}

if(sqr * sqr == nb){
return sqr;
}else {return 0;}


}
int main(void){
printf("%d\n", ft_sqrt(4)); // 2 döndürmeli
printf("%d\n", ft_sqrt(16)); // 4 döndürmeli
printf("%d\n", ft_sqrt(5)); // 0 döndürmeli (tam kare değil)return(0);
}
