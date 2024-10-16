
#include <stdio.h>

void ft_ft(int *nbr){

	*nbr=42;

}

int main(void){

int i = 2;
int *nbr;
nbr  = &i;
ft_ft(nbr);
printf("%d\n", i);
return(0);
}
